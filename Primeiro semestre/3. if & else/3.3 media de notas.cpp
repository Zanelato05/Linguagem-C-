#include <iostream>

using namespace std;

int main(){
	
	int nota1;
	int nota2;
	int nota3;
	float resultado;
	char opc;
	
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	
	cout << "\nDigite a segunda nota: ";
	cin >> nota2;
	
	cout << "\nDigite a terceira nota: ";
	cin >> nota3;
	
	resultado = (nota1 + nota2 + nota3) /3;
	
	if(resultado >= 6.0){
		cout << "\nEste aluno esta APROVADO";
	}
	
	else if(resultado >= 4.0){
		cout << "\nEste aluno vai pra RECUPERACAO";
	}
	
	else{
		cout << "\nEste aluno foi REPROVADO";
	}
	
	return 0;
}
