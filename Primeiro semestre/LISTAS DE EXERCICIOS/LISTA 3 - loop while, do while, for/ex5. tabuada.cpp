//Faça um algoritmo que solicite um valor para o usuário, e gere a tabuada deste valor. Por exemplo, se o usuário informar o valor 2 deverá ser gerada a tabuada do número 2, 
//variando de 0 a 10.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
		float numero;
		int contador = 0;
		
		cout << "Dígite de qual número você quer a tabuada: ";
		cin >> numero;
		cout << "\n";
		
		system("cls");
		
		while(contador <= 10){
		
			cout << numero << "X" << contador<< " = " <<numero * contador << "\n";
			contador++;
		}
		
		cout << "\nEssa é a tabuada do " << numero;
		
	return 0;
}
