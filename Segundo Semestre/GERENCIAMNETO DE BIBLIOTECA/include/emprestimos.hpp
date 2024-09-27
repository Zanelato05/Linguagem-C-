#ifndef EMPRESTIMOS_HPP
#define EMPRESTIMOS_HPP

#include <string>
#include <vector>

using namespace std;

struct Emprestimo {
    string codigoLivro;
    string codigoUsuario;
    string dataEmprestimo;
    bool emprestado;
};

// Declaração do vetor emprestimos como extern
extern vector<Emprestimo> emprestimos;

#endif
