//Faça um algoritmo que solicite um valor inteiro e informe, ao final, o fatorial deste valor. Obs.: por exemplo, o fatorial de 5 é 120, pois 5 x 4 x 3 x 2 x 1 = 120.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	double N;
	double resultado = 1;
	double num;
	
	cout << "Informe um valor inteiro para ser fatorado: ";
	cin >> N;
	
	num = N;
	
	while(N != 1){
		
		resultado*= N;
		N--;
		
	}
	system("cls");
	cout << "O fatorial de " << num << " é: " << resultado << "\n\n\n\n";
	
		
	return 0;
}
