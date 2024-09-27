//Faça um programa que peça o nome do usuário e exiba na tela: “Olá, [nome do usuário]!”
#include <iostream>

using namespace std;

int main(){
	
string nome;

cout << "Digite seu nome: ";
getline (cin,nome);

cout << "Ola, " << nome << endl;
	
	return 0;
}
