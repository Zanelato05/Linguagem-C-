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

#include <ctime>

int calcularDiasAtraso(const string &dataEmprestimo) {
  // Obtendo a data atual
  time_t now = time(0);//variavel usada para pegar data e hora do atual sistema

  // Obtendo a data de empréstimo
  int diaEmprestimo, mesEmprestimo, anoEmprestimo;
  sscanf(dataEmprestimo.c_str(), "%d/%d/%d", &diaEmprestimo, &mesEmprestimo,&anoEmprestimo);//extrai o mes e ano da string dataEmprestimo e converte para três inteiros

  tm dataEmp = {};
  dataEmp.tm_mday = diaEmprestimo;//estrutura tm é preenchida com as informações da data de emprestimo
  dataEmp.tm_mon = mesEmprestimo - 1;// subtrai 1 pois a estrutura tm só usa de 0 á 11
  dataEmp.tm_year = anoEmprestimo - 1900;// subtrai 1900 pois a estrutura tm começa em 1900

  
  time_t timeEmprestimo = mktime(&dataEmp);//converte a estrutura tm para um valor inteiro, que é o numero de segundos desde 1 de janeiro de 1970, 

  
  double segundos = difftime(now, timeEmprestimo);//calcula a diferença entre a data atual e a data de emprestimo em segundos
  int dias = segundos / (60 * 60 * 24);//converte para dias
  return dias;
}

void verificarMultas() {
  const int PRAZO_DEVOLUCAO = 7; //delimitei prazo de 7 dias
  const double MULTA_DIARIA =// delimitei multa de dois reais por dia
      2.0; // multa de 2 unidades monetárias por dia de atraso

  cout << "---- Controle de Multas ----" << endl;
  for (const auto &emprestimo : emprestimos) {//percorre todos os empréstimos ativos
    if (emprestimo.emprestado) {
      int diasAtraso = calcularDiasAtraso(emprestimo.dataEmprestimo);//calcula quantos dias já passou
      if (diasAtraso > PRAZO_DEVOLUCAO) {//se passou da data entra no if
        double multa = (diasAtraso - PRAZO_DEVOLUCAO) * MULTA_DIARIA;//conta para saber o valor da multa
        cout << "Código do Livro: " << emprestimo.codigoLivro << endl;
        cout << "Código do Usuário: " << emprestimo.codigoUsuario << endl;
        cout << "Dias de Atraso: " << (diasAtraso - PRAZO_DEVOLUCAO) << endl;
        cout << "Multa: " << multa << " unidades monetárias" << endl;//multa exibida aqui
        cout << "-----------------------" << endl;
      }
    }
  }
}
