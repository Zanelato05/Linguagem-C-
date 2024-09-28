#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmath>
#include "struct.hpp"

using namespace std;

void imprimirCarros(){

    Carro carro1, carro2, carro3;

    carro1.nome = "Tornado";
    carro1.cor = "Vermelho";
    carro1.potencia = 450;
    carro1.velMax = 310;

    carro2.nome = "Fusca";
    carro2.cor = "Azul";
    carro2.potencia = 110;
    carro2.velMax = 160;

    carro3.nome = "Gol";
    carro3.cor = "Preto";
    carro3.potencia = 180;
    carro3.velMax = 240;

    cout << "Nome: " << carro1.nome << endl;
    cout << "Cor: " << carro1.cor << endl;
    cout << "Potência: " << carro1.potencia << endl;
    cout << "Velocidade Máxima: " << carro1.velMax << endl;
     
    cout << "\nNome: " << carro2.nome << endl;
    cout << "Cor: " << carro2.cor << endl;
    cout << "Potência: " << carro2.potencia << endl;
    cout << "Velocidade Máxima: " << carro2.velMax << endl;
    
    cout << "\nNome: " << carro3.nome << endl;
    cout << "Cor: " << carro3.cor << endl;
    cout << "Potência: " << carro3.potencia << endl;
    cout << "Velocidade Máxima: " << carro3.velMax << endl;
    cout << endl;
}