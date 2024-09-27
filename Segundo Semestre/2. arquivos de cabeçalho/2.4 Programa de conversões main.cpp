#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include "Programa_de_conversões_funções.hpp"

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	int escolhaMenu, jogarDenovo;
	float resultado, escolhaConversao, resultadofinal;
	double centimetros, metros, quilometros, gramas, quilogramas, celsius, fahrenheit, kelvin;

	do{
	do{	
	cout << "Seja bem vindo ao programa de conversão, nele podemos trabalhar com medidas de comprimento, peso e temperatura...\n\n\n";
	cout << "O QUE VOCÊ DESEJA CONVERTER?\n\n";
	cout << "1-  Metros para centímetros\n";
	cout << "2-  Centímetros para metros\n";
	cout << "3-  Metros para quilômetros\n";
 	cout << "4-  Quilômetros para metros\n";
	cout << "5-  Quilogramas para gramas\n";
	cout << "6-  Gramas para quilogramas\n";
	cout << "7-  Celsius para fahrenheit\n";
	cout << "8-  Fahrenheit para celsius\n";
	cout << "9-  Celsius para kelvin\n";
	cout << "10- Kelvin para celsius\n";
	cout << "11- Fahrenheit para kelvin\n";
	cout << "12- Kelvin para fahrenheit\n";
	cout << "13- Finalizar programa\n\n\n";
	cout << "Dígite aqui: ";
	cin >> escolhaMenu;
	if(escolhaMenu > 13 || escolhaMenu < 1){
		cout << "\nPor favor dígite um número válido\n\n";
	}
	system("cls");
}while(escolhaMenu > 13 || escolhaMenu < 1);
system("cls");
switch(escolhaMenu){
	
	case 1:
		metros = obterMetros();
	    centimetros = metros * 100;
	    cout << "\nSua medida em centimetros: " << centimetros;
	    break;
		
	case 2:
		centimetros = obterCentimetros();
	   	metros = centimetros / 100;
	    cout << "\nSua medida em metros: " << metros;
	    break;

	case 3:
		metros = obterMetros();
	    quilometros = metros / 1000;
	    cout << "\nSua medida em quilômetros: " << quilometros;
	    break;
	
	case 4:
		quilometros = obterQuilometros();
	    metros = quilometros * 1000;
	    cout << "\nSua medida em metros: " << metros;
	    break;
		
	case 5:	
		quilogramas = obterQuilogramas();
   		gramas = quilogramas * 1000;
   		cout << "\nSua medida em gramas: " << gramas;
   		break;
		
	case 6:	
		gramas = obterGramas();
   		quilogramas= gramas / 1000;
    	cout << "\nSua medida em quilôgramas: " << quilogramas;
    	break;
		
	case 7:	
		celsius = obterCelsius();
		fahrenheit = (celsius * 1.8) + 32;
		cout << "\nSua medida em fahrenheit: " << fahrenheit << "°";
		break;
			
	case 8:
		fahrenheit = obterFahrenheit();
		celsius = (fahrenheit - 32) / 1.8;
		cout << "\nSua medida em celsius: " << celsius << "°";
		break;
			
	case 9:	
		celsius = obterCelsius();
		kelvin = celsius + 273.15;
		cout << "\nSua medida em kelvin: " << kelvin << "°";
		break;
					
	case 10:	
		kelvin = obterKelvin();
		celsius = kelvin - 273.15;
		cout << "\nSua medida em celsius: " << celsius << "°";
		break;
				
	case 11:
		fahrenheit = obterFahrenheit();
		kelvin = ((fahrenheit - 32) / 1.8) + 273.15;
		cout << "\nSua medida em kelvin: " << kelvin << "°";
		break;
					
	case 12:
		kelvin = obterKelvin();
		fahrenheit = ((kelvin - 273.15) * 1.8) + 32;
		cout << "\nSua medida em fahrenheit: " << fahrenheit << "°";
		break;
							
	case 13:
		cout << "Obrigado por participar!";
		return 0;				
}	

	cout << "\n\n\n";
	system("pause");
	system("cls");
	cout << "Quer fazer mais uma conversão?";
	cout << "\n\n1- SIM    2- NÃO: ";
	cin >> jogarDenovo;
	system("cls");
}while(jogarDenovo == 1);

	if(jogarDenovo != 1){
		cout << "Obrigado por participar!";
		return 0;
	}
	return 0;
}
