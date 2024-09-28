
#include "../include/cadastroLivros.hpp"
#include "../include/funcoesLivros.hpp"
#include "../include/livros.hpp"
#include <iostream>
using namespace std;

int main() {
  carregarLivros(livros); // Carrega os livros do arquivo no início

  int opcao;
  do {
    opcao = mostrarMenu(); // Exibe o menu e permite interações
    switch (opcao) {
    case 1:
      cadastroLivros(livros); // Cadastro de livros
      break;
    case 8:
      salvarLivros(livros); // Salva os livros ao sair do programa
      cout << "Saindo do programa..." << endl;
      break;
    }
  } while (opcao != 8);

  return 0;
}