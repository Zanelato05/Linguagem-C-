#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
		int x;
		
		for(x=0; x<=10; x++){
			
			cout << x << "\n";
		}
		
		cout << "Programa finalizado";
		
	return 0;
}
