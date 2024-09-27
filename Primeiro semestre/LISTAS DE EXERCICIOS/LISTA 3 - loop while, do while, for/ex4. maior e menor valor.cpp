//Elabore um algoritmo que leia um conjunto indeterminado de valores e informe, ao final, o maior e o menor valor lidos. O algoritmo deverá ser encerrado se o usuário digitar um 
//valor negativo ou o valor 0.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int valor;
	int menor;
	int maior;
	
	cout << "DÍGITE OS VALORES\n\n";
	cout << "\nDígite um valor: ";
	cin >> valor;
	
		if (valor <= 0){
		
		cout << "\nO valor inserido é inválido, obrigado por participar!\n";
		return 0;
	} else {
		maior = valor;
		menor = valor;
	}
	
	while(true){
		
		cout << "\nDigite um valor: ";
		cin >> valor;
		
		if(valor <= 0){
			break;
		}
		
		else if (valor > maior){
			
			maior = valor;
		}
		
		else if (valor < menor) {
			
			menor = valor;
		}
			
	}
	
	cout << "\n\nO maior valor é: " << maior;
	cout << "\n\nO menor valor é: " << menor << "\n";
	
		
	return 0;
}
