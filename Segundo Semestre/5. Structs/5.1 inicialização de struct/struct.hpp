#ifndef STRUCT_HPP
#define STRUCT_HPP
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmath>
using namespace std;

struct Carro{
    string nome;
    string cor;
    int potencia;
    int velMax;
};

void imprimirCarros();

#endif