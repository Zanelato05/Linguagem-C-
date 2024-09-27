#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int contador = 15;
	
	do{
		cout << "Olá! " << contador << "\n";
		contador ++;
		
	}while (contador < 20);
	
	cout << "\nPrograma finaliado." << endl;
		
	return 0;
}
