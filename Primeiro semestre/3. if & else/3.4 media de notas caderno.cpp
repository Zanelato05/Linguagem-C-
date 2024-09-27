#include <iostream>
using namespace std;
int main(){
	
	float nota1;
	float nota2;
	float nota3;
	float resultado;
	
	cout <<"Digite a primeira nota: ";
	cin >> nota1;
	
	cout <<"\nDigite a segunda nota: ";
	cin >> nota2;
	
	cout << "\nDigite a terceira nota: ";
	cin >> nota3;
	
	resultado = (nota1 + nota2 + nota3) /3;
	
	if(resultado >= 6){
		cout << "\nAPROVADO" << " Nota " << resultado;
	}
	
	else{
		cout << "\nREPROVADO" << " Nota " << resultado;
	}
	
	return 0;
}
