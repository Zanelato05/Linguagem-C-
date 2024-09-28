#include "ProvaM1.hpp"
#include <locale.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int modo;

    while (true) {
        cout << "Bem-vindo ao sistema de autoatendimento McVali's!\n\n";
        cout << "Selecione o modo: 1. Administrador  2. Cliente  0. Sair: ";
        cin >> modo;

        switch (modo) {
            case 0:
                cout << "\n\nSaindo...\n";
                return 0;

            case 1:
                cadastrarItem();
                break;

            case 2:
                fazerPedido();
                break;

            default:
                cout << "Opção inválida. Tente novamente.\n";
        }
    }
}

