//Fazer um programa que leia o valor do salário-mínimo e o valor do salário de uma pessoa. Calcule e imprima quantos salários-mínimos essa pessoa ganha. 
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float salariominimo;
	float salariopessoal;
	float quantoganha;
	
	cout << "\nQual o valor do seu sálario?: ";
	cin >> salariopessoal;
	
	salariominimo = 1412.00;
	
	quantoganha = salariopessoal / salariominimo;
	
	if(quantoganha < 1){
		cout << "\nVocê recebe menos de um salário minímo";
	}
	
	else if(quantoganha > 1 && quantoganha < 2){
		cout << "\nVocê ganha entre um a dois salários minímos";
	}
	
	else if(quantoganha > 2 && quantoganha < 3){
		cout << "\nVocê ganha entre dois a três salários minímos";
	}
	
	else if(quantoganha > 3 && quantoganha < 4){
		cout << "\nVocê ganha entre três a quatro salários minímos";
	}
	
	else if(quantoganha > 4 && quantoganha < 5){
		cout << "\nVocê ganha entre quatro a cinco salários minímos";
	}
	
	else if(quantoganha > 5 && quantoganha < 6){
		cout << "\nVocê ganha entre cinco a seis salários minímos";
	}
	
	else if(quantoganha > 6 && quantoganha < 7){
		cout << "\nVocê ganha entre seis a sete salários minímos";
	}
	
	else if(quantoganha == 1){
		cout << "\nVocê ganha um salário minímo";
	}
	
	else if(quantoganha == 2){
		cout << "\nVocê ganha dois salários minímos";
	}
	
	else if(quantoganha == 3){
		cout << "\nVocê ganha três salários minímos";
	}
	
	else if(quantoganha == 4){
		cout << "\nVocê ganha quatro salários minímos";
	}
	
	else if(quantoganha == 5){
		cout << "\nVocê ganha cinco salários minímos";
	}
	
	else if(quantoganha == 6){
		cout << "\nVocê ganha seis salários minímos";
	}
	
	else if(quantoganha == 7){
		cout << "\nVocê ganha sete salários minímos";
	}
	
	else{
		cout << "\nVocê ganha mais de sete salários minímos";
	}
		
	return 0;
}

