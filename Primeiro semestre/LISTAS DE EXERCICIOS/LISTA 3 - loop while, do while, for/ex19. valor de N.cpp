//Faça um programa que solicita ao usuário o valor de N e calcule o valor de S na série S: (1/1) + (1/2) + (1/3) + ... + (1/N)
//Ao fim exiba o número real resultante da série. 
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");

	double N;
	double i;
	double conta;
	
	
	cout << "\n S: 1 + 1 + 1 + ... + 1\n";
	cout << "   --- --- ---       ---  = ?\n";
	cout << "    1   2   3         N                Determine o valor de N para resolvermos a série: ";

	cin >> N;
	
	for(i = 1; i != N; i++){
		
		conta = conta + 1/i;
		
	}
	
	conta = conta + 1/N;
	
	cout << "\n\n\n\n\n\n\nR: " << conta;
		
	return 0;
}
