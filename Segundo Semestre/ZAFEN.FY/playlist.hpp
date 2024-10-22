#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

#include <string>
#include <vector>

using namespace std;

struct Musica {
    string nome;
    string artista;
    string genero;
    int duracao;
};

struct Playlist {
    string nome;
    vector<Musica> musicas;
};

void adicionarMusica(Playlist& playlist);
void salvarPlaylists(const vector<Playlist>& playlists);
void recuperarPlaylist(const string& nomePlaylist);
Playlist* encontrarPlaylist(vector<Playlist>& playlists, const string& nomePlaylist);
void adicionarPlaylist(vector<Playlist>& playlists);
void adicionarMusicaEmPlaylist(vector<Playlist>& playlists);
void atualizarMusica(Playlist& playlist);
vector<Playlist> buscarMusica(const vector<Playlist>& playlists, const string& nomeMusica);
int calcularDuracaoTotal(const Playlist& playlist);
void ordenarPorDuracao(Playlist& playlist);
vector<Musica> filtrarPorGenero(const Playlist& playlist, const string& genero);

#endif
