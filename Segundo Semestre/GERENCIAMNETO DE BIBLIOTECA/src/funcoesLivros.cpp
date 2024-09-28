#include "../include/funcoesLivros.hpp"
#include "../include/cadastroLivros.hpp"
#include "../include/cadastroUsuario.hpp"
#include "../include/emprestimos.hpp"
#include "../include/livros.hpp"
#include "../include/usuarios.hpp"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void imprimirMenu() {
  cout << "----- Gerenciamento da biblioteca -----" << endl;
  cout << "1 - Cadastro" << endl;
  cout << "2 - Acervo" << endl;
  cout << "3 - Emprestimo" << endl;
  cout << "4 - Meus Livros" << endl;
  cout << "5 - Devolucao" << endl;
  cout << "6 - Relatorio de emprestimos" << endl;
  cout << "7 - Verificar Multas" << endl; // Adicionei multas
  cout << "8 - Sair" << endl << endl;
}

void visualizarAcervo() {
  cout << "-- Livros disponíveis --" << endl;
  for (int i = 0; i < livros.size(); ++i) {
    cout << "Título: " << livros[i].titulo << endl
         << "  Ano: " << livros[i].ano << endl
         << "  Autor: " << livros[i].autor << endl
         << "  Código: " << livros[i].codigoLivro << endl
         << "  Editora: " << livros[i].editora << endl
         << "  Categoria: " << livros[i].categoria << endl
         << endl;
  }
}

string toLowerCase(const string &str) {
  string lowerStr = str;
  transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
  return lowerStr;
}

void pesquisarLivros() {
  int escolhaPesquisa;
  cout << "----- Pesquisa de Livros -----" << endl;
  cout << "1 - Por Título" << endl;
  cout << "2 - Por Autor" << endl;
  cout << "3 - Por Ano" << endl;
  cout << "4 - Voltar" << endl;
  cout << "Escolha uma opção: ";
  cin >> escolhaPesquisa;
  cin.ignore(); // Limpar o buffer de entrada

  switch (escolhaPesquisa) {
  case 1: {
    string titulo;
    cout << "Digite o título do livro: ";
    getline(cin, titulo);
    string tituloLower = toLowerCase(titulo);
    bool encontrado = false;
    for (int i = 0; i < livros.size(); ++i) {
      if (toLowerCase(livros[i].titulo).find(tituloLower) != string::npos) {
        cout << "Título: " << livros[i].titulo << endl
             << "  Ano: " << livros[i].ano << endl
             << "  Autor: " << livros[i].autor << endl
             << "  Código: " << livros[i].codigoLivro << endl
             << "  Editora: " << livros[i].editora << endl
             << "  Categoria: " << livros[i].categoria << endl
             << endl;
        encontrado = true;
      }
    }
    if (!encontrado) {
      cout << "Nenhum livro encontrado com o título fornecido." << endl;
    }
    break;
  }
  case 2: {
    string autor;
    cout << "Digite o nome do autor: ";
    getline(cin, autor);
    string autorLower = toLowerCase(autor);
    bool encontrado = false;
    for (int i = 0; i < livros.size(); ++i) {
      if (toLowerCase(livros[i].autor).find(autorLower) != string::npos) {
        cout << "Título: " << livros[i].titulo << endl
             << "  Ano: " << livros[i].ano << endl
             << "  Autor: " << livros[i].autor << endl
             << "  Código: " << livros[i].codigoLivro << endl
             << "  Editora: " << livros[i].editora << endl
             << "  Categoria: " << livros[i].categoria << endl
             << endl;
        encontrado = true;
      }
    }
    if (!encontrado) {
      cout << "Nenhum livro encontrado com o autor fornecido." << endl;
    }
    break;
  }
  case 3: {
    int ano;
    cout << "Digite o ano de publicação: ";
    cin >> ano;
    bool encontrado = false;
    for (int i = 0; i < livros.size(); ++i) {
      if (livros[i].ano == ano) {
        cout << "Título: " << livros[i].titulo << endl
             << "  Ano: " << livros[i].ano << endl
             << "  Autor: " << livros[i].autor << endl
             << "  Código: " << livros[i].codigoLivro << endl
             << "  Editora: " << livros[i].editora << endl
             << "  Categoria: " << livros[i].categoria << endl
             << endl;
        encontrado = true;
      }
    }
    if (!encontrado) {
      cout << "Nenhum livro encontrado com o ano fornecido." << endl;
    }
    break;
  }
  case 4:
    break; // Voltar para o menu principal
  default:
    cout << "Opção inválida." << endl;
    break;
  }
}
// emprestimo abaixo
bool livroEstaDisponivel(const string &codigoLivro) {
  for (const auto &emprestimo : emprestimos) {
    if (emprestimo.codigoLivro == codigoLivro && emprestimo.emprestado) {
      return false; // livro está emprestado
    }
  }
  return true; // livro esta disponivel
}
string obterDataAtual() {
  time_t now = time(0);
  tm *ltm = localtime(&now);
  char dataAtual[11];
  sprintf(dataAtual, "%02d/%02d/%04d", ltm->tm_mday, 1 + ltm->tm_mon,
          1900 + ltm->tm_year);
  return string(dataAtual);
}
void realizarEmprestimo() {
  string codigoLivro, codigoUsuario;
  cout << "Digite o código do livro: ";
  cin >> codigoLivro;
  cout << "Digite o código do usuário: ";
  cin >> codigoUsuario;
  if (livroEstaDisponivel(codigoLivro)) {
    // cria um novo registro de empréstimo
    Emprestimo novoEmprestimo;
    novoEmprestimo.codigoLivro = codigoLivro;
    novoEmprestimo.codigoUsuario = codigoUsuario;
    novoEmprestimo.dataEmprestimo = obterDataAtual();
    novoEmprestimo.emprestado = true; // define o livro como emprestado

    emprestimos.push_back(novoEmprestimo); // adiciona o registro ao vetor
    cout << "Empréstimo realizado com sucesso!" << endl;
  } else {
    cout << "Livro indisponível para empréstimo." << endl;
  }
}
void checarEmprestimos(const string &codigoUsuario) {
  int livrosEmprestados = 0;

  if (emprestimos.empty()) {
    cout << "Não há registros de empréstimos." << endl;
    (void)system("pause");
    return;
  }
  // Percorre todos os empréstimos e verifica quais pertencem ao usuário
  for (const auto &emprestimo : emprestimos) {
    if (emprestimo.codigoUsuario == codigoUsuario && emprestimo.emprestado) {
      cout << endl << "Código do Livro: " << emprestimo.codigoLivro << endl;
      cout << "Data do Empréstimo: " << emprestimo.dataEmprestimo << endl;
      livrosEmprestados++;
    } else {
      cout << "O usuário não tem livros emprestados no momento." << endl;
    }
  }

  if (livrosEmprestados == 0) {
  }

  (void)system("pause"); // Pausa o programa para que o usuário veja o resultado
}
void gerarRelatorioEmprestimos() {
  if (emprestimos.empty()) {
    cout << "Não há registros de empréstimos." << endl;
    return;
  }

  cout << "---- Relatório de Empréstimos ----" << endl;
  for (const auto &emprestimo : emprestimos) {
    cout << "Código do Livro: " << emprestimo.codigoLivro << endl;
    cout << "Código do Usuário: " << emprestimo.codigoUsuario << endl;
    cout << "Data do Empréstimo: " << emprestimo.dataEmprestimo << endl;
    cout << "Emprestado: " << (emprestimo.emprestado ? "Sim" : "Não") << endl;
    cout << "-----------------------" << endl;
  }
}

int mostrarMenu() {
  while (true) { // Loop principal para o menu
    int escolha;
    imprimirMenu();
    cin >> escolha;
    cin.ignore(); // Limpar o buffer de entrada

    switch (escolha) {
    case 1:
      int escolhaCadastro;
      cout << "---- Opções de cadastro ----" << endl;
      cout << "1 - Cadastrar Livro" << endl;
      cout << "2 - Cadastrar Usuário" << endl;
      cin >> escolhaCadastro;
      cin.ignore();
      switch (escolhaCadastro) {
      case 1:
        cadastroLivros(livros); // Chama a função de cadastro
        break;
      case 2:
        cadastroUsuarios(usuarios); // Chama a função de cadastro);
        break;

      default:
        cout << "Opção inválida" << endl;
      }
      break;
    case 2:
      int escolhaAcervo;
      cout << "----- Opções de Acervo -----" << endl;
      cout << "1 - Visualizar Todo o Acervo" << endl;
      cout << "2 - Pesquisar Livros" << endl;
      cout << "3 - Voltar" << endl;
      cout << "Escolha uma opção: ";
      cin >> escolhaAcervo;
      cin.ignore(); // Limpar o buffer de entrada

      switch (escolhaAcervo) {
      case 1:
        visualizarAcervo();
        break;
      case 2:
        pesquisarLivros();
        break;
      case 3:
        break; // Voltar para o menu principal
      default:
        cout << "Opção inválida." << endl;
        break;
      }
      break;
    case 3:
      // Implementar emprestimo aqui
      realizarEmprestimo();
      {}
      break;
    case 4: {
      // Implementar verificação de empréstimos do usuário
      string codigoUsuario;
      cout << "Insira seu código de usuário para verificar seus empréstimos: ";
      cin >> codigoUsuario;
      checarEmprestimos(codigoUsuario);
      break;
    }
    case 5:
      devolverLivro();
      break;
    case 6:
      // Implementar relatorio de emprestimos aqui
      gerarRelatorioEmprestimos();

      break;
    case 7:

      verificarMultas();

      break;
    case 8:
      return 0; // Sair do programa
    default:
      cout << "Opção inválida" << endl;
      break;
    }
  }
  return 0;
}
