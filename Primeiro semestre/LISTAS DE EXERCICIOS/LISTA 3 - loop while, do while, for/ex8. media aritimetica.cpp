//Faça um programa que solicita ao usuário uma quantidade indeterminada de números inteiros. O programa deve calcular e escrever a média aritmética apenas dos números 
//pares. A entrada de dados deve ser encerrada quando o número 0 (ZERO) for digitado.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int n;
	float soma = 0;
	double media;
	int contador = 0;
	
	cout << "Calculando a média aritmética somente dos números pares!\n\n";
	
	do{
		cout << "Dígite um valor inteiro: ";
		cin >> n;
		cout << "\n";
		
		if(n == 0){
			
			break;
			
		} else if(n%2 == 0){
			
			soma += n;
			contador++;
		}
			
		}while(n != 0);
	
	media = soma/contador;
	
	cout << "\n\nVocê dígitou " << contador << " números pares, e a soma deles foi de " << soma << " portanto sua média aritmética ficou em: " << media;
			
	return 0;
}
