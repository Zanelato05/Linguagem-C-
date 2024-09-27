#include "../include/cadastroLivros.hpp"
#include "../include/cadastroUsuario.hpp"
#include "../include/emprestimos.hpp"
#include "../include/funcoesLivros.hpp"
#include "../include/livros.hpp"
#include "../include/usuarios.hpp"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;
void devolverLivro() {
  string codigoLivro, codigoUsuario;
  cout << "Digite o código do livro a ser devolvido: ";
  cin >> codigoLivro;//peço ao usuario os dados de entrada e armazena
  cout << "Digite o código do usuário: ";
  cin >> codigoUsuario;

  bool livroEncontrado = false;
  for (auto &emprestimo : emprestimos) {//percorre todos os empréstimos ativos
    if (emprestimo.codigoLivro == codigoLivro &&
        emprestimo.codigoUsuario == codigoUsuario && emprestimo.emprestado) {//procura por um empréstimo com o código do livro e do usuário
      emprestimo.emprestado = false; // Marca o livro como devolvido se for encontrado um emprestimo ativo
      cout << "Livro devolvido com sucesso!" << endl;
      livroEncontrado = true;//devolução processada
      break;
    }
  }

  if (!livroEncontrado) {//caso for false, logo o Empréstimo não foi encontrado ou livro já foi devolvido
    cout << "Empréstimo não encontrado ou livro já devolvido." << endl;
  }
}
