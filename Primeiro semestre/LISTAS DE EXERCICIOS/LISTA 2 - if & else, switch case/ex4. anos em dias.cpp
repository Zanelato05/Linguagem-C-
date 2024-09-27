//Faça um programa que peça ao usuário um tempo representando anos. Mostre quantos dias tem esse intervalo de tempo, assumindo que um ano tenha 365 dias.
#include <iostream>

using namespace std;

int main(){
	
	int anos;
	int resultado;
	
	cout << "Digite sua idade: ";
	cin >> anos;
	
	resultado = (anos*365);
	
	cout << resultado << endl;
	
	
	return 0;
}
