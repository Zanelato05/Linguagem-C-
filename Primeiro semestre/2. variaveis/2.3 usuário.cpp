#include <iostream>

using namespace std;

int main(){
	
	//TIPO E NOME DA VARIAVEL
	int dado; 
	char caracter; 
	double decimal; 
	float decimaldois; 
	bool resposta; 
	string nome; 
	
	//USUARIO DESIGNA UM VALOR PARA AS VARIAVEIS
	cout << "DIGITE UM NUMERO E CLIQUE ENTER: ";
	cin >> dado;
	
	cout << "DIGITE UMA LETRA E CLIQUE ENTER: ";
	cin >> caracter;
	
	cout << "DIGITE UM NUMERO COM VIRGULA EXTENSO E CLIQUE ENTER: ";
	cin >> decimal;
	
	cout << "DIGITE UM NUMERO COM VIRGULA CURTO E CLIQUE ENTER: ";
	cin >> decimaldois;
	
	cout << "DIGITE SEU NOME E CLIQUE ENTER: ";
	cin >> nome; 

	
	//IMPRIMINDO OS VALORES DA VARIAVEL
	cout <<"\nNumero: " << dado << endl;
	cout <<"Letra: " << caracter << endl;
	cout <<"Numero com virgula grande: " << decimal << endl;
	cout <<"Numero com virgula pequeno: " << decimaldois << endl;
	cout <<"Nome: " << nome << endl;
	
	return 0;
}
