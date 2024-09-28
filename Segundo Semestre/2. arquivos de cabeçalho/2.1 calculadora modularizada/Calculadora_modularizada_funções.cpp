#include <iostream>
#include <cmath>  
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include "Calculadora_modularizada_funções.hpp"

using namespace std;

int menu(){
	
    int opcao;
    do{
    cout << "MENU DE SELEÇÃO\n" << endl;
    cout << "1 - somar" << endl;
    cout << "2 - subtrair" << endl;
    cout << "3 - dividir" << endl;
    cout << "4 - multiplicar" << endl;
    cout << "5 - potenciação" << endl;
    cout << "6 - fatorial" << endl;
    cout << "7 - módulo" << endl;
    cout << "8 - raiz quadrada" << endl;
    cout << "0 - Sair" << endl;
    cout << "\n\nDigite a opcâo desejada: ";
    cin >> opcao;
    system("cls");
}while(opcao < 0 || opcao > 8);
    return opcao;
}
double obterNumero(string mensagem){
    double numero;
    cout << mensagem;
    cin >> numero;
    return numero;
}
double somar(double num1, double num2){
    double resultado = num1 + num2;
    return resultado;
}
double subtrair(double num1, double num2) {
    double resultado = num1 - num2;
    return resultado;
}
double dividir(double num1, double num2) {
    double resultado = 0;
    if(num2 == 0){
        cout << "\nO divisor não pode ser zero" << endl;        
    }else{
        resultado = num1 / num2;
    }
    return resultado;
}
double multiplicar(double num1, double num2) {
    double resultado = num1 * num2;
    return resultado;
}
double potenciacao(double base, double expoente) {
    double resultado = pow(base, expoente);
    return resultado;
}
double fatorial(double num1) {
    double resultado = 0;
    if (num1 < 0) {
      cout << "\nFatorial não é definido para números negativos" << endl;
    }else{ 
      resultado = 1;   
      for(int i = num1; i>=1; i--){
         resultado *= i;
      }
    }
    return resultado;
}
int modulo(int num1, int num2) {
    double resultado = 0;
    if(num2 == 0){
      cout << "\nO divisor não pode ser zero" << endl;  
    }else{
      resultado = num1 % num2;               
    }   
    return resultado;
}
double raiz(double num1) {
    double resultado = 0;
    if (num1 < 0) {
        cout << "\nNão existe raiz quadrada de números negativos" << endl;                 
    }else{
        resultado = sqrt(num1);    
    }
    return resultado;
}
