#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int tamanho = 5; //Posso mudar o valor aqui, que o resto do código não terá interferencia.
	int vetor[tamanho]; 
	int i;	
		
		vetor[0] = 10;
		vetor[1] = 20;
		vetor[2] = 30;
		vetor[3] = 40;
		vetor[4] = 50;
		// e adicionar as posições.
		
		for(i = 0; i < tamanho; i++){
		
		cout << vetor[i] << "\n";
		
	}
		
	return 0;
}
