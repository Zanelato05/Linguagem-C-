//Faça um algoritmo que leia 10 valores inteiros e mostre a sua soma. 
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int valor; //VALORES QUE O USUARIO DIGITA
	int soma = 0; //SOMAR A VARIAVEL VALOR
	int i; //CONTADOR
	
	cout << "Digite dez valores inteiros\n" << endl;
	
	for(i=0; i<10; i++){
		
		cout << "Valor " << i+1 << ": ";
		cin >> valor;
		soma+= valor;
	}

	cout << "\n\nA soma dos seus valores é: " << soma << endl;
	
	return 0;
}
