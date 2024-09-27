//Faça um algoritmo que gere, automaticamente, a tabuada dos valores de 1 a 10. Por 
//exemplo, 1 x 1 = 1, 1 x 2 = 2, ... 1 x 10 = 10, 2 x 1 = 1, ..., 10 x 10 = 100.
#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
		float numero;
		int contador = 1;
		float a = 1;
		float b = 2;
		float c = 3;
		float d = 4;
		float e = 5;
		float f = 6;
		float g = 7;
		float h = 8;
		float i = 9;
		float j = 10;
		
		for(a,b,c,d,e,f,g,h,i,j; contador <=10; contador++){
			
			cout << "\n\n\n";
			cout << "TABUADA DO " << contador;
			cout << "\n\n";
			cout << a << "X" << contador << " = "<< a*contador <<endl;
			cout << b << "X" << contador << " = "<< b*contador << endl;
			cout << c << "X" << contador << " = "<< c*contador << endl;
			cout << d << "X" << contador << " = "<< d*contador << endl;
			cout << e << "X" << contador << " = "<< e*contador << endl;
			cout << f << "X" << contador << " = "<< f*contador << endl;
			cout << g << "X" << contador << " = "<< g*contador << endl;
			cout << h << "X" << contador << " = "<< h*contador << endl;
			cout << i << "X" << contador << " = "<< i*contador << endl;
			cout << j << "X" << contador << " = "<< j*contador << endl;	
			
		}	
			
	return 0;
	
} 
