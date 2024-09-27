//Faça um programa que peça as 4 notas e mostre a média.
#include <iostream>

using namespace std;

int main(){
	
	int not1;
	int not2;
	int not3;
	int not4;
	float media;
	
	cout << "Digite a primeira nota: ";
	cin >> not1;
	
	cout << "\nDigite a segunda nota: ";
	cin >> not2;
	
	cout << "\nDigite a terceira nota: ";
	cin >> not3;
	
	cout << "\nDigite a quarta nota: ";
	cin >> not4;
	
	media = (not1 + not2 + not3 + not4) / 4.0f;
	
	cout << "\nSua media final foi de " << media << endl;
	
	return 0;
}
