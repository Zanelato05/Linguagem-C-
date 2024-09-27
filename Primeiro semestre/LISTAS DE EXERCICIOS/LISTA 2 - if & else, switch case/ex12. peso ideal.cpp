//Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) – 58 
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	float altura;
	int pesoideal;
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Dígite sua altura: ";
	cin >> altura;
	
	pesoideal = (72.7 * altura) - 58;
	
	cout << "\nSeu peso ideal é de: " << pesoideal << " KG";
	
	return 0;
}
