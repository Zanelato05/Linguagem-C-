#ifndef STRUCT_HPP
#define STRUCT_HPP

#include <iostream>
#include <string>
using namespace std;

struct Carro {
    string nome;
    string cor;
    int ano;
    int velMax;

    
    void inserirCarros(string Nome, string Cor, int Ano, int VelMax) {
        nome = Nome;
        cor = Cor;
        ano = Ano;
        velMax = VelMax;
    }

    
    void imprimirCarros() {
        cout << "Nome..........: " << nome << endl;
        cout << "Cor...........: " << cor << endl;
        cout << "Ano...........: " << ano << endl;
        cout << "Velocidade Máx: " << velMax << "\n\n";
    }
};

#endif
