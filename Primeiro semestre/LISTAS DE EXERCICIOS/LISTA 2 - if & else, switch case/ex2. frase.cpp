//Faça um programa que peça uma frase ao usuário e exiba no console. 
#include <iostream>

using namespace std;

int main(){
	
string frase;

cout << "Digite uma frase: ";
getline (cin, frase);

cout << frase;

return 0;
}
