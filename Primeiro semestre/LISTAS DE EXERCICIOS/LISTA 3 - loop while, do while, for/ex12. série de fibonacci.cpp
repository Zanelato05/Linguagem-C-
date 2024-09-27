//Faça um algoritmo que faça a geração da série de fibonacci, até o termo n informado pelo usuário. Por exemplo, se o usuário informar o valor 6 deverá ser exibido 8 na tela. 
//Obs.: Série de Fibonacci: 1, 1, 2, 3, 5, 8, 13, 21, ... 
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int N;
	int a = 1;
	int b = 1;
	int resultado;
	int i;
	
		cout << "Informe o número vai delimitar a série de Fibonacci: ";
		cin >> N;
		
		if(N == 1 || N == 2){
			
			resultado = 1;
		}	
		else{ 
		
			for(i = 3; i <= N; i++){
				
				resultado = a + b;
				a = b;
				b = resultado;	
			}			
		}
		
		system("cls");
		
		cout << "O " << N << "° número da série de Fibonacci é: " << resultado << "\n\n\n\n\n";
		
	return 0;
}
