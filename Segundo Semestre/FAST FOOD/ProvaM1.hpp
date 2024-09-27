#ifndef PROVAM1_HPP
#define PROVAM1_HPP

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <vector>
#include <stdlib.h>


using namespace std;

struct Item {
    string nome;
    double preco;
    string descricao;
};

extern vector<Item> hamburguer;
extern vector<Item> adicionais;
extern vector<Item> bebidas;
extern vector<Item> sobremesas;

void cadastrarItem();
void fazerPedido();

#endif
