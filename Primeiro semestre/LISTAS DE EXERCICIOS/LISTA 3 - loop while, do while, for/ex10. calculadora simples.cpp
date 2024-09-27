//Faça um programa para uma calculadora simples que solicita ao usuário dois operandos como entrada, seleciona uma das opções da lista 
//(1- soma, 2- multiplicação, 3- divisão, 4-potência) e exibe o resultado. O algoritmo deve executar repetidamente até que os dois operandos informados sejam iguais a zero.
//Utilize uma variável do tipo real para exibir o resultado.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	double soma;
	double multiplicacao;
	double divisao;
	float base;
	float expoente;
	double operacao;
	
	cout << "                                             CALCULADORA SIMPLES!\n\n\n";
	
	do{
	
		cout << "Dígite o prímeiro valor (ou base): ";
		cin >> base;
		
		cout << "\nDígite o segundo valor (ou expoente): ";
		cin >> expoente;
		
		if(base == 0 && expoente == 0){
			
			return 0;
		}
		
		cout << "\n\nQual operação você deseja realizar: "; 
		
		cout << "1.Soma +  2.Multiplicação *  3.Divisão /  4.Potência ^  ";
		cin >> operacao;
	
	
		if(operacao == 1){
			
			soma = base + expoente;
			cout << "\n\nA soma dos dois valores é de: " << soma << "\n\n\n";
			system("pause");
			
		}else if(operacao == 2){
			
			multiplicacao = base * expoente;
			cout << "\n\nA multiplicação dos dois valores é de: " << multiplicacao << "\n\n\n";
			system("pause");
			
		}else if(operacao == 3){
			
			divisao = base / expoente;
			cout << "\n\nA divisão dos dois valores é de: " << divisao << "\n\n\n";
			system("pause");
			
		}else if(operacao == 4){
			
		double potencia = 1;
			
	    for(int i = 0; i < expoente; i++){
		
			potencia *= base;
		}
	
			cout << "\nO resultado de " << base << " elevado a " << expoente << " é: " << potencia << "\n\n\n";
			system("pause");
	
		}else{
			
			cout << "\n\nValor dígitado incorreto, tente novamente!";
			system("pause");
		}
		
		system("cls");
		
}while( base != 0 || expoente != 0);
	
	cout << "\n\nFim do programa!";
	
		
	return 0;
}
