#ifndef STRUCT_HPP
#define STRUCT_HPP
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <locale.h>
#include <string>
#include <time.h>

using namespace std;

struct Carro{
  string nome;
  string cor;
  int pot;
  int velMax;
  int vel;

  void inserirCarros(string Nome, string Cor, int Pot, int VelMax) {
    nome = Nome;
    cor = Cor;
    pot = Pot;
    velMax = VelMax;
    vel = 0;
  }
  void imprimirCarros() {
    cout << "Nome: " << nome << endl;
    cout << "Cor: " << cor << endl;
    cout << "Potência: " << pot << endl;
    cout << "Velocidade Máxima: " << velMax << endl;
    cout << "Velocidade Atual: " << vel << "\n\n";
  }
  void mudaVel(int velo) {

    vel = velo;
    if (vel > velMax) {
      vel = velMax;
    } else if (vel < 0) {
      vel = 0;
    }
  }
};
#endif