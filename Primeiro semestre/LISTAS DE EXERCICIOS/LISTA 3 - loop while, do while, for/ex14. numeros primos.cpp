//Faça um programa que verifica se um número digitado pelo usuário é um número primo, ou seja, um número que só é divisível por 1 e por ele mesmo. 
//Caso seja primo =  “O número é primo”; 
//Caso não seja primo = “O número não é primo”.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int N;
	
	
	do{
	
		cout << "Dígite um número inteiro positivo: ";
		cin >> N;
		
		system("cls");
		
	}while(N <= 0);
		
		if(N == 2){
			
			cout << N << " É um número primo!\n\n\n\n";
			return 0;
			
		}else if(N == 1){
			
			cout << N << " Não é um número primo!\n\n\n\n";
			return 0;
		}
		
		for(int i = 2; i <= N / 2; i++){
			
			if(N % i == 0){
				
				cout << N << " Não é um número primo!\n\n\n\n";
				return 0;
			}
		}
		
			
		cout << N << " É um número primo!\n\n\n\n";
			
		
	return 0;
}
