#include <iostream>
using namespace std;
int main (){
	
	int val;
	
	cout <<"1-Verde  2-Vermelho  3-Azul";
	cout <<"\nSelecione uma cor: ";
	cin >> val;
	
	switch(val){
		
		case 1:
		cout <<"\nCor selecionada foi a Verde";
		break;
		
		case 2:
		cout <<"\nCor selecionada foi a Vermelha";
		break;
		
		case 3:
		cout << "\nCor selecionada foi a Azul";
		break;
		
		default:
		cout << "\nValor invalido";	
	}
	cout <<"\n\nTeste finalizado";
	
	return 0;
}
