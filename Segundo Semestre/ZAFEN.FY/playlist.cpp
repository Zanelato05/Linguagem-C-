#include "playlist.hpp"
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

void adicionarMusica(Playlist& playlist) {
    Musica musica;
    cout << "\nDigite o nome da música (ou 'fim' para encerrar): ";
    getline(cin, musica.nome);
    if (musica.nome == "fim") {
        return;
    }
    cout << "Digite o nome do artista: ";
    getline(cin, musica.artista);
    cout << "Digite o gênero da música: ";
    getline(cin, musica.genero);
    cout << "Digite a duração da música em segundos: ";
    cin >> musica.duracao;
    cin.ignore();
    playlist.musicas.push_back(musica);
    cout << "\nMúsica adicionada com sucesso à playlist '" << playlist.nome << "'!\n\n\n";
}

void salvarPlaylists(const vector<Playlist>& playlists) {
    for (const Playlist& playlist : playlists) {
        ofstream arquivo(playlist.nome + ".txt", ios::app);
        for (const Musica& musica : playlist.musicas) {
            arquivo << "Música: " << musica.nome << "  /  "
                    << "Artista: " << musica.artista << "  /  "
                    << "Gênero: " << musica.genero << "  /  "
                    << "Duração: " << musica.duracao << " segundos" << endl;
        }
        arquivo.close();
    }
    cout << "\nPlaylists salvas com sucesso!\n";
}

void recuperarPlaylist(const string& nomePlaylist) {
    ifstream arquivo(nomePlaylist + ".txt");
    if (!arquivo.is_open()) {
        cout << "\nA playlist '" << nomePlaylist << "' não existe.\n";
        return;
    }
    cout << "\nExibindo informações da playlist '" << nomePlaylist << "':\n\n";
    string linha;
    while (getline(arquivo, linha)) {
        cout << linha << endl;
    }
    arquivo.close();
}

Playlist* encontrarPlaylist(vector<Playlist>& playlists, const string& nomePlaylist) {
    for (Playlist& playlist : playlists) {
        if (playlist.nome == nomePlaylist) {
            return &playlist;
        }
    }
    return nullptr;
}

void adicionarPlaylist(vector<Playlist>& playlists) {
    string nomePlaylist;
    cout << "\nDigite o nome da nova playlist: ";
    getline(cin, nomePlaylist);
    if (encontrarPlaylist(playlists, nomePlaylist) != nullptr) {
        cout << "\nA playlist '" << nomePlaylist << "' já existe. Acessando a playlist...\n\n\n";
        return;
    }
    Playlist novaPlaylist;
    novaPlaylist.nome = nomePlaylist;
    playlists.push_back(novaPlaylist);
    cout << "\nPlaylist '" << nomePlaylist << "' criada com sucesso!\n\n\n";
}

void adicionarMusicaEmPlaylist(vector<Playlist>& playlists) {
    string nomePlaylist;
    cout << "\n\nDigite o nome da playlist onde deseja adicionar a música: ";
    getline(cin, nomePlaylist);
    Playlist* playlist = encontrarPlaylist(playlists, nomePlaylist);
    if (playlist == nullptr) {
        Playlist novaPlaylist;
        novaPlaylist.nome = nomePlaylist;
        playlists.push_back(novaPlaylist);
        playlist = &playlists.back();
    }
    adicionarMusica(*playlist);
}

void atualizarMusica(Playlist& playlist) {
    string nomeMusica;
    cout << "\nDigite o nome da música que deseja atualizar: ";
    getline(cin, nomeMusica);
    for (Musica& musica : playlist.musicas) {
        if (musica.nome == nomeMusica) {
            cout << "\nMúsica encontrada! Atualize as informações:\n";
            cout << "Digite o novo nome da música: ";
            getline(cin, musica.nome);
            cout << "Digite o novo nome do artista: ";
            getline(cin, musica.artista);
            cout << "Digite o novo gênero da música: ";
            getline(cin, musica.genero);
            cout << "Digite a nova duração da música em segundos: ";
            cin >> musica.duracao;
            cin.ignore();
            cout << "\nMúsica atualizada com sucesso!\n";
            ofstream arquivo(playlist.nome + ".txt", ios::out);
            for (const Musica& musica : playlist.musicas) {
                arquivo << "Música: " << musica.nome << "  /  "
                        << "Artista: " << musica.artista << "  /  "
                        << "Gênero: " << musica.genero << "  /  "
                        << "Duração: " << musica.duracao << " segundos" << endl;
            }
            arquivo.close();
            return;
        }
    }
    cout << "\nMúsica não encontrada na playlist '" << playlist.nome << "'.\n";
}

vector<Playlist> buscarMusica(const vector<Playlist>& playlists, const string& nomeMusica) {
    vector<Playlist> resultados;
    for (const Playlist& playlist : playlists) {
        for (const Musica& musica : playlist.musicas) {
            if (musica.nome == nomeMusica) {
                resultados.push_back(playlist);
                break;
            }
        }
    }
    return resultados;
}

int calcularDuracaoTotal(const Playlist& playlist) {
    int totalSegundos = 0;
    for (const auto& musica : playlist.musicas) {
        totalSegundos += musica.duracao;
    }
    if (totalSegundos >= 3600) {
        int horas = totalSegundos / 3600;
        int minutos = (totalSegundos % 3600) / 60;
        return horas * 100 + minutos;
    } else {
        int minutos = totalSegundos / 60;
        return minutos;
    }
}

void ordenarPorDuracao(Playlist& playlist) {
    sort(playlist.musicas.begin(), playlist.musicas.end(),
         [](const Musica& a, const Musica& b) {
             return a.duracao < b.duracao;
         });
}

vector<Musica> filtrarPorGenero(const Playlist& playlist, const string& genero) {
    vector<Musica> musicasFiltradas;
    for (const Musica& musica : playlist.musicas) {
        if (musica.genero == genero) {
            musicasFiltradas.push_back(musica);
        }
    }
    return musicasFiltradas;
}
