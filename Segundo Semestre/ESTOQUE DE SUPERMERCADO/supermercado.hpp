#ifndef SUPERMERCADO_HPP
#define SUPERMERCADO_HPP

#include <vector>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

struct Produto {
    string nome;
    float preco;
    int quantidade;
    string categoria;
};

vector<Produto> carregarEstoque(const string &arquivoEstoque);
void salvarEstoque(const vector<Produto> &estoque, const string &arquivoEstoque);
float processarListaDeCompras(vector<Produto> &estoque, const string &arquivoCompras);
bool estoqueZerado(const vector<Produto> &estoque);

#endif
