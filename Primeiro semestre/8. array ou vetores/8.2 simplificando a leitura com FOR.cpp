#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int vetor[5];
	int i;	
	
		vetor[0] = 10;
		vetor[1] = 20;
		vetor[2] = 30;
		vetor[3] = 40;
		vetor[4] = 50;
		
	for(i = 0; i < 5; i++){
		
		cout << vetor[i] << "\n";
		
	}
		
	return 0;
}
