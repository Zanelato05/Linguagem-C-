//Faça um programa que solicita ao usuário dois valores inteiros e positivos que serão a base e o expoente. O programa deve usar laço de repetição para calcular e escrever o resultado 
//da base elevado ao expoente (potência).
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int base;
	int expoente;
	int resultado = 1;
	int contador;
	
	
	cout << "Digíte a base: ";
	cin >> base;
	
	cout << "\nDígite o seu expoente: ";
	cin >> expoente;
	
	if(base < 0 || expoente < 0){
		
		cout << "\nPor favor, dígite valores inteiros e posítivos!";
		return 0;
	}
	
	for(contador = 0; contador < expoente; contador++){
		
		resultado *= base;
	}
	
	cout << "\nO resultado de " << base << " elevado a " << expoente << " é: " << resultado;

		
		
		
	return 0;
}
