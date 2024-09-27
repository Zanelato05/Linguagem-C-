//Elabore um algoritmo que leia o valor de N, calcule e mostre o resultado da seguinte sequência.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	double N;
	double dividendo;

	double conta = 1;
	double Nfatorial = 1;
	double resultado;
	double num;
	double M;
	double O = 1;
	
	cout << "\n      2     3     4            N+1\n";
	cout << "1 +  --- + --- + ---  + ... +  ---  = ?\n";
	cout << "      1!    2!    3!            N!               \n\n\nDetermine o valor de N para resolvermos a série: ";
	cin >> N;
	
	num = N;
	
	for(double i = 1; i < N; i++){
		
		
			M = i;
			
			double divisorfatorial = 1;
			
			while(M != 0){
		
			divisorfatorial = M * divisorfatorial;
			M--;
			
			}
			
		dividendo = O + 1;
		
		O++;
			
		conta = (conta + (dividendo/divisorfatorial));
	
	}
	
	while(N != 1){
		
		Nfatorial = N * Nfatorial;
		N--;
		
	}
	
	resultado = conta + ((num + 1) / Nfatorial);
	
	cout << "\n\n\n\n\nR: " << resultado;
		
	return 0;
}
