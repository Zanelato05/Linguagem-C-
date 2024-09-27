//Peça ao usuário três números reais e calcule a metade da soma deles. Com o cálculo sendo feito em uma linha de código. Exiba o resultado depois.
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	double num1;
	double num2;
	double num3;
	double resultado;
	
	cout << "Dígite o primeiro número real: ";
	cin >> num1;
	
	cout << "\nDígite o segundo número real: ";
	cin >> num2;
	
	cout << "\nDígite o terçeiro número real: ";
	cin >> num3;
	
	resultado = (num1 + num2 + num3) / 2;
	
	cout << "\nA metade da soma dos números é: " << resultado;
	
}
