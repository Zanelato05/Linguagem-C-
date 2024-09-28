#include "struct.hpp"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <locale.h>
#include <string>
#include <time.h>

using namespace std;

int main() {

  setlocale(LC_ALL, "portuguese");

  Carro car1, car2, car3, car4, car5;

  car1.inserirCarros("Fox", "Branco", 220, 180);
  car1.mudaVel(190);
  car1.imprimirCarros();

  car2.inserirCarros("Focus", "Preto", 340, 230);
  car2.mudaVel(-90);
  car2.imprimirCarros();

  car3.inserirCarros("Fusca", "Azul", 90, 120);
  car3.mudaVel(75);
  car3.imprimirCarros();

  car4.inserirCarros("Camaro", "Vermelho", 420, 300);
  car4.mudaVel(250);
  car4.imprimirCarros();

  car5.inserirCarros("Celta", "Cinza", 150, 180);
  car5.mudaVel(200);
  car5.imprimirCarros();

  return 0;
}