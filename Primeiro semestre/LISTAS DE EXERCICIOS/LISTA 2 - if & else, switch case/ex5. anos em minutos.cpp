//Faça a mesma coisa do exercício 4 só que converta para minutos.
#include <iostream>

using namespace std;

int main(){
	
	int anos;
	int resultado;
	
	cout << "Digite sua idade: ";
	cin >> anos;
	
	resultado = (anos*365*24*60);
	
	cout << "Voce esta a " << resultado << " minutos na terra";
	
	return 0;
}
