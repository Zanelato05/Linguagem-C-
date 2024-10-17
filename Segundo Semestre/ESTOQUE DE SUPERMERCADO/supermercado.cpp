#include "supermercado.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm> 
#include <cstdlib>

using namespace std;

vector<Produto> carregarEstoque(const string &arquivoEstoque) {
    vector<Produto> estoque;
    ifstream file(arquivoEstoque);
    string linha;

    while (getline(file, linha)) {
        stringstream ss(linha);
        string nome, precoStr, quantidadeStr, categoria;
        float preco;
        int quantidade;

        getline(ss, nome, ',');
        getline(ss, precoStr, ',');
        getline(ss, quantidadeStr, ',');
        getline(ss, categoria, ',');

        preco = stof(precoStr);
        quantidade = stoi(quantidadeStr);

        Produto produto = {nome, preco, quantidade, categoria};
        estoque.push_back(produto);
    }

    file.close();
    return estoque;
}

void salvarEstoque(const vector<Produto> &estoque, const string &arquivoEstoque) {
    ofstream file(arquivoEstoque);
    for (const auto &produto : estoque) {
        file << produto.nome << "," << fixed << setprecision(2) << produto.preco << ","
             << produto.quantidade << "," << produto.categoria << "\n";
    }
    file.close();
}

float processarListaDeCompras(vector<Produto> &estoque, const string &arquivoCompras) {
    ifstream file(arquivoCompras);
    string linha;
    float totalCompra = 0.0;

    cout << "\nProcessando lista de compras...\n\n";

    while (getline(file, linha)) {
        stringstream ss(linha);
        string nomeProduto, quantidadeStr;
        getline(ss, nomeProduto, ',');
        getline(ss, quantidadeStr, ',');
        int quantidadeDesejada = stoi(quantidadeStr);

        bool encontrado = false;
        for (auto &produto : estoque) {
            if (produto.nome == nomeProduto) {
                encontrado = true;
                int quantidadeComprada = min(produto.quantidade, quantidadeDesejada);
                if (quantidadeComprada > 0) {
                    float precoTotal = quantidadeComprada * produto.preco;
                    cout << quantidadeComprada << " " << produto.nome << " - R$ " 
                         << fixed << setprecision(2) << precoTotal << "\n";
                    totalCompra += precoTotal;
                    produto.quantidade -= quantidadeComprada;
                } else {
                    cout << produto.nome << " - indisponível\n";
                }
                break;
            }
        }

        if (!encontrado) {
            cout << nomeProduto << " - indisponível\n";
        }
    }

    cout << "\nValor total da compra - R$ " << fixed << setprecision(2) << totalCompra << "\n\n\n";
    file.close();
    return totalCompra;
}

bool estoqueZerado(const vector<Produto> &estoque) {
    for (const auto &produto : estoque) {
        if (produto.quantidade > 0) {
            return false;
        }
    }
    return true;
}
