#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
    int vetor[5]; //Posso mudar o valor aqui, que o resto do código não terá interferencia.
	int i;	 
	
		vetor[0] = 10;
		vetor[1] = 20;
		vetor[2] = 30;
		vetor[3] = 40;
		vetor[4] = 50;
		// e adicionar as posições.
		
		for(i = 0; i < sizeof(vetor) /4; i++){
		
		cout << vetor[i] << "\n";
		
	}
		
	return 0;
}
