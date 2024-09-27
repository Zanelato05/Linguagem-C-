//Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius.
#include <iostream>

using namespace std;

int main (){
	
	float grauf;
	int conversao;
	
	cout << "Digite uma temperatura em farenheit: ";
	cin >> grauf;

	conversao = (grauf - 32) / 1.8;
	
	cout << "\nEsta fazendo " << conversao << " graus celsius.";
	
	return 0;
}
