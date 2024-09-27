//INCREMENTANDO

#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
    int contador = 1;
    
    while(contador<=30){
    	
    	cout << "\nOlá, tudo bem? - " << contador;
    	contador++;
    	
	}
	
	cout << "\n\nPrograma finalizado!";
    
	return 0;
}


//DECREMENTANDO

#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
    int contador = 30;
    
    while(contador>=0){
    	
    	cout << "\nOlá, tudo bem? - " << contador;
    	contador--;
    	
	}
	
	cout << "\n\nPrograma finalizado!";
    
	return 0;
}

 



