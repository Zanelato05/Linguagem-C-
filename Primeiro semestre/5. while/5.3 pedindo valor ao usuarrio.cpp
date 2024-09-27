#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
    int N;
    
    while(N<10){
    	
    	cout << "Dígite um número: ";
    	cin >> N;
    	
	}
	
	cout << "\nPrograma finalizado!";
    
	return 0;
}
