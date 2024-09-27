#include <iostream>
using namespace std;
int main(){
	
	int valor;
	
	cout << "\nSelecione um transporte";
	cout << "\n\n1- carro  2- moto  3- aviao  4- helicoptero: ";
	cin >> valor;
	
	switch(valor){
		
		case 1:
		case 2:
			cout << "\nTranporte terrestre,";
		
		switch(valor){
		
			case 1:
				cout <<" Voce escolheu o carro";
				break;
		
			case 2:
				cout <<" Voce escolheu a moto";
				break;
	}
			break;
		
			case 3:
			case 4:
				cout << "\nTranporte aereo,";
		
		switch(valor){
		
			case 3:
				cout <<" Voce escolheu o aviao";
				break;
		
			case 4:
				cout <<" Voce escolheu o helicoptero";
				break;
	}
}

			cout << "\n\nTeste finalizado";
	return 0;
}
