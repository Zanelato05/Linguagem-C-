#include <iostream>
#include "playlist.hpp"

using namespace std;

int exibirMenu() {
    int escolha;
    cout << "\n\nMenu Principal\n";
    cout << "\n1. Adicionar uma nova playlist\n";
    cout << "2. Adicionar uma música a uma playlist\n";
    cout << "3. Recuperar uma playlist\n";
    cout << "4. Atualizar uma música\n";
    cout << "5. Buscar música por nome\n";
    cout << "6. Calcular tempo de duração de uma playlist\n";
    cout << "7. Ordenar músicas por duração\n";
    cout << "8. Filtrar músicas por gênero\n";
    cout << "0. Salvar e sair\n";
    cout << "\nEscolha uma opção: ";
    cin >> escolha;
    cin.ignore();
    return escolha;
}

int main() {
    vector<Playlist> playlists;
    int opcao;
    do {
        opcao = exibirMenu();
        switch (opcao) {
            case 1:
                adicionarPlaylist(playlists);
                break;
            case 2:
                adicionarMusicaEmPlaylist(playlists);
                break;
            case 3: {
                string nomePlaylist;
                cout << "\nDigite o nome da playlist que deseja recuperar: ";
                getline(cin, nomePlaylist);
                recuperarPlaylist(nomePlaylist);
                break;
            }
            case 4: {
                string nomePlaylist;
                cout << "\nDigite o nome da playlist onde está a música que deseja atualizar: ";
                getline(cin, nomePlaylist);
                Playlist* playlist = encontrarPlaylist(playlists, nomePlaylist);
                if (playlist != nullptr) {
                    atualizarMusica(*playlist);
                } else {
                    cout << "\nPlaylist não encontrada.\n";
                }
                break;
            }
            case 5: {
                string nomeMusica;
                cout << "\nDigite o nome da música que deseja buscar: ";
                getline(cin, nomeMusica);
                vector<Playlist> resultados = buscarMusica(playlists, nomeMusica);
                if (resultados.empty()) {
                    cout << "\nNenhuma música com o nome '" << nomeMusica << "' foi encontrada.\n";
                } else {
                    cout << "\nA música '" << nomeMusica << "' foi encontrada nas seguintes playlists:\n";
                    for (const Playlist& playlist : resultados) {
                        cout << "- Playlist: " << playlist.nome << endl;
                    }
                }
                break;
            }
            case 6: {
                string nomePlaylist;
                cout << "\nDigite o nome da playlist para calcular a duração total: ";
                getline(cin, nomePlaylist);
                Playlist* playlist = encontrarPlaylist(playlists, nomePlaylist);
                if (playlist != nullptr) {
                    int duracao = calcularDuracaoTotal(*playlist);
                    if (duracao >= 100) {
                        cout << "\nDuração total da playlist '" << playlist->nome << "': " << duracao / 100 << " horas e " << duracao % 100 << " minutos.\n";
                    } else {
                        cout << "\nDuração total da playlist '" << playlist->nome << "': " << duracao << " minutos.\n";
                    }
                } else {
                    cout << "\nPlaylist não encontrada.\n";
                }
                break;
            }
            case 7: {
                string nomePlaylist;
                cout << "\nDigite o nome da playlist que deseja ordenar por duração: ";
                getline(cin, nomePlaylist);
                Playlist* playlist = encontrarPlaylist(playlists, nomePlaylist);
                if (playlist != nullptr) {
                    ordenarPorDuracao(*playlist);
                    cout << "\nPlaylist '" << playlist->nome << "' ordenada por duração com sucesso.\n";
                } else {
                    cout << "\nPlaylist não encontrada.\n";
                }
                break;
            }
            case 8: {
                string nomePlaylist, genero;
                cout << "\nDigite o nome da playlist que deseja filtrar: ";
                getline(cin, nomePlaylist);
                Playlist* playlist = encontrarPlaylist(playlists, nomePlaylist);
                if (playlist != nullptr) {
                    cout << "\nDigite o gênero que deseja filtrar: ";
                    getline(cin, genero);
                    vector<Musica> musicasFiltradas = filtrarPorGenero(*playlist, genero);
                    if (!musicasFiltradas.empty()) {
                        cout << "\nMúsicas do gênero '" << genero << "' na playlist '" << playlist->nome << "':\n";
                        for (const Musica& musica : musicasFiltradas) {
                            cout << "- " << musica.nome << " por " << musica.artista << " (Duração: " << musica.duracao << " segundos)\n";
                        }
                    } else {
                        cout << "\nNenhuma música do gênero '" << genero << "' encontrada na playlist.\n";
                    }
                } else {
                    cout << "\nPlaylist não encontrada.\n";
                }
                break;
            }
            case 0:
                salvarPlaylists(playlists);
                cout << "\nSaindo e salvando playlists...\n";
                break;
            default:
                cout << "\nOpção inválida! Tente novamente.\n";
                break;
        }
    } while (opcao != 0);

    return 0;
}
