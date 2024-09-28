#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmatch>
#include "Programa de medidas.hpp"

using namespace std;

double obterPeso(){
    double peso;
    cout << "Informe seu peso: ";
    cin >> peso;
    return peso;
}
double obterAltura(){
    double altura;
    cout << "Informe sua altura: ";
    cin >> altura;
    return altura;
}
double obterIdade(){
    double idade;
    cout << "Informe sua idade: ";
    cin >> idade;
    return idade;
}

double calculoImc(double peso, double altura){
	double imc;
	imc = peso / (altura * altura);
	return imc;
}

double calculoTmb(double peso, double altura, double idade){
	double tmb; 
	tmb = (0.879 * peso) + (10.2 * altura) - (5.23 * idade) - 161;
	return tmb;
}

double calculoAgua(double peso){
	double agua;
	agua = 0.035 * peso;
	return agua;
	
}
