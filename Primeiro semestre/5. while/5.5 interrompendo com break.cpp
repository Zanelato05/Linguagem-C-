#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
    int contador = 1;
    
    while(contador<=30){
    	
    	cout << "\nOlá, tudo bem? - " << contador;
    	contador++;
    	
    	if(contador == 15){
    		break;
		}
    	
	}
	
	cout << "\n\nPrograma finalizado!";
    
	return 0;
}
