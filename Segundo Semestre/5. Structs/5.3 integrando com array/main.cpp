#include "struct.hpp"
#include <cstdlib>
#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main() {
  setlocale(LC_ALL, "portuguese");

  Carro carros[6];

  carros[0].inserirCarros("Veloz", "Prata", 2022, 380);
  carros[1].inserirCarros("Brutus", "Branco", 2017, 200);
  carros[2].inserirCarros("Cactus", "Vermelho", 2013, 260);
  carros[3].inserirCarros("Extrem", "Branco", 2019, 300);
  carros[4].inserirCarros("Nebuloso", "Preto", 1965, 100);
  carros[5].inserirCarros("Gol", "Verde", 2020, 340);

  for (int i = 0; i < 6; i++) {
    carros[i].imprimirCarros();
  }

  return 0;
}
