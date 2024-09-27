//Faça um programa que exiba 30 vezes na tela a mensagem “Olá, tudo bem?”.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
		int oi = 1;
		
		while(oi <=30){
			cout << "\nOlá, tudo bem?";
			oi++;
		}
		
		cout << "\n\nPrograma finalizado";
		
	return 0;
}
