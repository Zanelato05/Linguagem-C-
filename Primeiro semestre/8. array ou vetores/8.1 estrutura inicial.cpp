#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
		//TIPO  NOME [TAMANHO];
		
		int vetor[5];
		
		vetor[0] = 10;
		vetor[1] = 20;
		vetor[2] = 30;
		vetor[3] = 40;
		vetor[4] = 50;
		
		cout << vetor[0] << "\n";
		cout << vetor[1] << "\n";
		cout << vetor[2] << "\n";
		cout << vetor[3] << "\n";
		cout << vetor[4] << "\n";
		
		
	return 0;
}
