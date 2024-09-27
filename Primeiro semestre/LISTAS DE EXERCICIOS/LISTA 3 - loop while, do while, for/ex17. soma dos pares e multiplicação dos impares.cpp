//Faça um algoritmo que leia dois valores inteiros e informe: a soma dos números pares desse intervalo de números, incluindo os números digitados; 
//a multiplicação dos números ímpares desse intervalo de números, incluindo os números digitados.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int N1, N2;
	int somapares = 0;
	int multiplicacaoimpares = 1;
	
		cout << "Vamos trabalhor com o intervalo entre dois números inteiros!!!\n\n";
		cout << "Dígite o primeiro valor inteiro: ";
		cin >> N1;
		
		cout << "\nDígite o segundo valor inteiro: ";
		cin >> N2;
		
		system("cls");
		
		if(N1 < N2){
			
		while(N1 <= N2){
			
			if(N1 % 2 == 0){
				
				somapares = somapares + N1;
				N1 = N1 + 1;
				
			}else if(N1 % 2 != 0){
				
				multiplicacaoimpares = multiplicacaoimpares * N1;
				N1 = N1 + 1;
				
			}
		}
			
		}else if(N1 > N2){
			
			while(N1 >= N2){
			
			if(N1 % 2 == 0){
				
				somapares = somapares + N1;
				N1 = N1 - 1;
				
			}else if(N1 % 2 != 0){
				
				multiplicacaoimpares = multiplicacaoimpares * N1;
				N1 = N1 - 1;
				
			}
		}
					
		}
		
		cout << "A soma dos números pares foi de " << somapares << ". Já a multiplicação dos números impares é de " << multiplicacaoimpares;
		
	return 0;
}
