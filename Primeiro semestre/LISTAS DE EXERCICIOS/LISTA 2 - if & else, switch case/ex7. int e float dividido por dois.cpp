//Faça um programa que peça um int e um float ao usuário, depois exiba os dois números divididos por dois.
#include <iostream>

using namespace std;

int main(){
	
	float valorinteiro;
	float valordecimal;
	
	cout << "Digite um numero inteiro: ";
	cin >> valorinteiro;
	
	cout << "\nDigite um numero decimal: ";
	cin >> valordecimal;
	
	cout << valorinteiro / 2 << endl;
	
	cout << valordecimal / 2 << endl;
	
	return 0;
}
