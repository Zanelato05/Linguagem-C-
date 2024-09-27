//Peça ao usuário três números inteiros, calcule e exiba a soma, subtração, divisão e multiplicação entre eles. 
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float soma;
	float subtracao;
	float divisao;
	float multiplicacao;
	float num1;
	float num2;
	float num3;
	
	cout << "Dígite o primeiro número inteiro: ";
	cin >> num1;
	
	cout << "\nDígite o segundo número inteiro: ";
	cin >> num2;
	
	cout << "\nDígite o terçeiro número inteiro: ";
	cin >> num3;
	
	soma = num1 + num2 + num3;
	subtracao = num1 - num2 - num3;
	divisao = num1 / num2 / num3;
	multiplicacao = num1 * num2 * num3;
	
	cout << "\nResultado da soma: " << soma;
	cout << "\nResultado da subtração: " << subtracao;
	cout << "\nResultado da divisão: " << divisao;
	cout << "\nResultado da multplicação: " << multiplicacao;
	
}

