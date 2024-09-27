//Faça um programa que recebe um valor do usuário e exiba 12% (doze por cento) desse total. 
#include <iostream>

using namespace std;

int main(){
	
	float porcentagem;
	int num;
	
	cout << "Digite um valor: ";
	cin >> num;
	
	porcentagem = (num*0.12);
	
	cout << "\n12% de " << num << " equivale a " << porcentagem;
	
	
	
	return 0;
}
