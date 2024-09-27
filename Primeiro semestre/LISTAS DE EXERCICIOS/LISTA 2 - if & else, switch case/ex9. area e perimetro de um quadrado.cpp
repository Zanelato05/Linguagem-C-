//Faça um programa que peça o lado de um quadrado, calcule e exiba sua área e perímetro. 
#include <iostream>

using namespace std;

int main (){
	
	int quadrado;
	float area;
	float perimetro;
	
	cout << "Digite o lado de um quadrado: ";
	cin >> quadrado;
	
	area = quadrado * quadrado;
	perimetro = quadrado * 4;
	
	cout << "\nArea: " << area << "      Perimetro: " << perimetro;
		
	return 0;
}
