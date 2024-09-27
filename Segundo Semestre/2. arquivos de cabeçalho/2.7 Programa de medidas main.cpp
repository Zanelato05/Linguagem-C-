#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmatch>
#include "Programa de medidas.hpp"

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
    double peso, altura, idade, tmb, imc, agua, resultado;
	int escolha;
	
	do{
    cout << "O QUE VOCE DESEJA MEDIR? " << endl << endl << endl;
    cout << "1- IMC  \n2- TMB  \n3- Quantos litros de Agua devo beber por dia";
    cout << "\n\n\nDigite aqui: ";
    cin >> escolha;
    system("cls");
    }while(escolha > 3 || escolha < 1);

    switch(escolha){

    case 1:
    peso = obterPeso();
	altura = obterAltura();
	resultado = calculoImc(peso, altura);
    cout << "\n\nSeu IMC eh de: " << resultado << endl;
    break;
    
    case 2:
    peso = obterPeso();
    altura = obterAltura();
    idade = obterIdade();
    resultado = calculoTmb(peso, altura, idade);
    cout << "\n\nSeu TMB eh de: " << resultado << endl;
    break;

    case 3:
    peso = obterPeso();
    resultado = calculoAgua(peso);
    cout << "\n\nRecomenda - se beber: " << resultado << " litros de agua por dia.";
    }
}
