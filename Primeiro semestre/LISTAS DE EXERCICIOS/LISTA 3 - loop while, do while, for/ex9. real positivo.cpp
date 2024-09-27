//Faça um programa que solicita ao usuário um número real positivo. Verifique se o número é realmente positivo, e em caso contrário solicite ao usuário digitar novamente
//(este processo pode se repetir inúmeras vezes e é chamado de consistência, pois garante que o número será válido após a entrada de dados). Saídas: 
//• Pedido ao usuário = “Digite um número real positivo”; 
//• Caso número valido = “O número digitado é valido”; 
//• Caso número invalido = “Número invalido, tente novamente”.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int n;
	int contador = 0;
	
	do{
		
		cout << "Dígite um número real posítivo: ";
		cin >> n;
		contador ++;
		
		if(n > 0){
			
			cout << "\nO número dígitado é valido!\n\n\n\n";
			system("pause");
			system("cls");
			
		}else{
			
			cout << "\nNúmero inválido, tente novamente!\n\n\n\n";
			system("pause");
			system("cls");
			
		}
		
	}while(contador != 0);
		
	return 0;
}
