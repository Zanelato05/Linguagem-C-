//Faça um programa que exiba na tela os 20 primeiros números primos após o 100. 
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int N = 101;
	int contador = 0;
	int resposta;
	int primo;
	int i;
	
			
		while(contador < 20){
			
			primo = 1;
			
			for(i = 2; i * i <= N; i++){
				
				if(N % i == 0){
					
					primo = 0;
					break;
					
				}
				
			}
		
		if(primo == 1){
			
			cout << N << " ";
			contador++;
			
		}
		
		N++;
			
		}
	
		cout << "\n\n\n";
		
	return 0;
}
