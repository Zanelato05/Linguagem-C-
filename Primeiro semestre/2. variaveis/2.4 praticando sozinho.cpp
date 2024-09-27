#include <iostream>

using namespace std;

int main(){
	
	//VAMOS CRIAR ALGUMAS VARIAVEIS
	
	int numero;
	char letra;
	double decimal;
	string frase;
	
	//PEDIR VALORES AO USUARIO	
	
	cout << "Digite o dia do seu aniversario: ";
	cin >> numero;
	cout << "Digite a inicial do seu nome: ";
	cin >> letra;
	cout << "Digite quanto dinheiro voce tem: ";
	cin >> decimal;
	cout << "Digite o nome da sua mae: ";
	cin >> frase;
	
	//IMPRIMIR NA TELA	
	
	cout << "\nNumero: " << numero << endl;
	cout << "Inicial: " << letra << endl;
	cout << "Saldo: " << decimal << endl;
	cout << "Nome: " << frase << endl;
	
	
	
	return 0;
}
