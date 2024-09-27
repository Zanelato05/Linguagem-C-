#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int vetor[7] = {10,20,30,40,50,60,70}; //Posso mudar o indice e adicionar posições de uma forma mais facil.
	int i;
	
	for(i = 0; i < sizeof(vetor) /4; i++){
		
		cout << vetor[i] << "\n";
	}
		
	return 0;
}
