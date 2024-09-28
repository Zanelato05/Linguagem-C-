#include "ProvaM1.hpp"
#include <cstdlib>
#include <iostream>
#include <locale.h>
#include <string>
#include <time.h>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <sstream>

using namespace std;

vector<Item> hamburguer(3);
vector<Item> adicionais(6);
vector<Item> bebidas(3);
vector<Item> sobremesas(2);

void cadastrarItem() {
    system("cls");
    cout << "MODO ADMINISTRADOR SELECIONADO\n\n";

    for (int i = 0; i < 3; i++) {
        cout << "Digite o nome do hamburguer " << i + 1 << ": ";
        if (i == 0) {
            cin.ignore();
        }
        getline(cin, hamburguer[i].nome);
        cout << "\nDigite o preço do hamburguer " << i + 1 << ": ";
        cin >> hamburguer[i].preco;
        cin.ignore();
        cout << "\nDigite a descrição do hamburguer " << i + 1 << ": ";
        getline(cin, hamburguer[i].descricao);
        system("cls");
    }

    for (int i = 0; i < 6; i++) {
        cout << "Digite o nome do adicional " << i + 1 << ": ";
        getline(cin, adicionais[i].nome);
        cout << "\nDigite o preço do adicional " << i + 1 << ": ";
        cin >> adicionais[i].preco;
        cin.ignore();
        cout << "\nDigite a descrição do adicional " << i + 1 << ": ";
        getline(cin, adicionais[i].descricao);
        system("cls");
    }

    for (int i = 0; i < 3; i++) {
        cout << "Digite o nome da bebida " << i + 1 << ": ";
        getline(cin, bebidas[i].nome);
        cout << "\nDigite o preço da bebida " << i + 1 << ": ";
        cin >> bebidas[i].preco;
        cin.ignore();
        cout << "\nDigite a descrição da bebida " << i + 1 << ": ";
        getline(cin, bebidas[i].descricao);
        system("cls");
    }

    for (int i = 0; i < 2; i++) {
        cout << "Digite o nome da sobremesa " << i + 1 << ": ";
        getline(cin, sobremesas[i].nome);
        cout << "\nDigite o preco da sobremesa " << i + 1 << ": ";
        cin >> sobremesas[i].preco;
        cin.ignore();
        cout << "\nDigite a descrição da sobremesa " << i + 1 << ": ";
        getline(cin, sobremesas[i].descricao);
        system("cls");
    }

    cout << "Itens cadastrados com sucesso!";
    system("cls");
}

void fazerPedido() {
    double precoFinal = 0.0;
    int escolha1, escolha2, escolha3, escolha4;
    string entradaAdicionais;
    vector<int> escolhasAdicionais;

    system("cls");
    cout << "MODO CLIENTE SELECIONADO\n\n";

    cout << "Escolha seu hamburguer\n\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << hamburguer[i].nome << " - R$" << hamburguer[i].preco << " - " << hamburguer[i].descricao << "\n";
    }
    cout << "\nEscolha: ";
    cin >> escolha1;
    precoFinal += hamburguer[escolha1 - 1].preco;

    cout << "\nEscolha seus adicionais\n\n";
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ". " << adicionais[i].nome << " - R$" << adicionais[i].preco << " - " << adicionais[i].descricao << "\n";
    }
    cout << "\nEscolha (use espaço para separar os números, ex: 1 2 5): ";
    cin.ignore();
    getline(cin, entradaAdicionais);

    istringstream iss(entradaAdicionais);
    int numero;
    while (iss >> numero) {
        escolhasAdicionais.push_back(numero);
        precoFinal += adicionais[numero - 1].preco;
    }

    cout << "\nEscolha sua bebida\n\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << bebidas[i].nome << " - R$" << bebidas[i].preco << " - " << bebidas[i].descricao << "\n";
    }
    cout << "\nEscolha: ";
    cin >> escolha3;
    precoFinal += bebidas[escolha3 - 1].preco;

    cout << "\nEscolha sua sobremesa\n\n";
    for (int i = 0; i < 2; i++) {
        cout << i + 1 << ". " << sobremesas[i].nome << " - R$" << sobremesas[i].preco << " - " << sobremesas[i].descricao << "\n";
    }
    cout << "\nEscolha: ";
    cin >> escolha4;
    precoFinal += sobremesas[escolha4 - 1].preco;

    cout << "\nRevisão do pedido: \n\n";
    cout << hamburguer[escolha1 - 1].nome << "\n";

    for (size_t i = 0; i < escolhasAdicionais.size(); i++) {
        cout << adicionais[escolhasAdicionais[i] - 1].nome << "\n";
    }

    cout << bebidas[escolha3 - 1].nome << "\n";
    cout << sobremesas[escolha4 - 1].nome << "\n\n";
    cout << "Total a pagar: R$ " << precoFinal << "\n";
    cout << "Pagamento realizado com sucesso!\n";
    system("pause");
    system("cls");
}

