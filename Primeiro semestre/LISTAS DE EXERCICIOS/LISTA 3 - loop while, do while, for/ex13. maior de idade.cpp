//Faça um programa que solicita a idade de 10 pessoas e exiba a quantidade de pessoas que possui idade maior ou igual a 18 anos. 
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int i;
	int idade;
	int maior = 0;
	
	for(i = 1; i < 11; i++){
		
		cout << "Dígite a idade da " << i << "° pessoa: ";
		cin >> idade;
		
		system("cls");
		
		if(idade >= 18){
			
			maior++;
		}		
	}
	
	system("cls");
	
		cout << maior << " pessoas são maiores de idade!\n\n\n\n\n\n";
		
	return 0;
}
