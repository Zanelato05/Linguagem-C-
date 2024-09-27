#include <iostream>
#include <cmath>  
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
using namespace std;


int main(){
   
   setlocale(LC_ALL, "portuguese");
   int opcao;
   double num1, num2, resultado;

    do
    {   
        opcao = menu();
        switch (opcao){
        	
        case 0:
            cout << "Encerrando o programa!";
            return 0;
            break;

        case 1:
            num1 = obterNumero("informe o primeiro número: ");
            num2 = obterNumero("\ninforme o segundo número: ");
            resultado = somar(num1,num2);
        	break;

        case 2:
            num1 = obterNumero("informe o primeiro número: ");
            num2 = obterNumero("\ninforme o segundo número: ");
            resultado = subtrair(num1, num2);
        	break;

        case 3:
            num1 = obterNumero("informe o dividendo: ");
            num2 = obterNumero("\ninforme o divisor: ");
            resultado = dividir(num1, num2);
        	break;

        case 4:
            num1 = obterNumero("informe o primeiro número: ");
            num2 = obterNumero("\ninforme o segundo número: ");
            resultado = multiplicar(num1, num2);
        	break;

        case 5:
            num1 = obterNumero("informe a base: ");
            num2 = obterNumero("\ninforme o expoente: ");
            resultado = potenciacao(num1, num2);
        	break;

        case 6:
            num1 = obterNumero("informe o número: ");
            resultado = fatorial(num1);
        	break;

        case 7:
        
            num1 = obterNumero("informe o dividendo: ");
            num2 = obterNumero("\ninforme o divisor: ");
            resultado = modulo(num1, num2); 
        	break;

        case 8:
            num1 = obterNumero("informe o número: ");
            resultado = raiz(num1);
       		break;
}

    cout << "\n\nResultado = " << resultado << "\n\n\n\n\n";
    system("pause");
    system("cls");

    } while (opcao != 0);
}
