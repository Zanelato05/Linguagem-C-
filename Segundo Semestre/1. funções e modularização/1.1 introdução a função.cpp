#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmath>

using namespace std;

void texto(){
  cout << "Testando função texto" << endl;
}

void soma1(int N1, int N2){
  cout << "\n\nA soma dos valores " << N1 << " e " << N2 << " é de: " << N1+N2 << endl;
}

int soma2(int N1, int N2){
  int resultado = N1 + N2;
  return resultado;
}

void funcaoVetor(string vetor[4]){
  for(int i = 0; i < 4; i++){
    cout << vetor[i] << endl;
  }
  
}

double multiplicacao(double NUM1, double NUM2){
  int resultado = NUM1 * NUM2;
  return resultado;
}


int main (){

  int res, NUM1, NUM2, RESULT;
  string vetor[4] = {"Maria", "João", "José", "Ana"};
  
  texto();
  soma1(14,8);
  
  res = soma2(34,18);
  cout << "\n\nA soma é de: " << res << "\n\n\n";
  
  funcaoVetor(vetor);

  cout << "\n\nDigite o primeiro número: ";
  cin >> NUM1;
  cout << "Digite o segundo número: ";
  cin >> NUM2;
  
  RESULT = multiplicacao(NUM1,NUM2);
   cout << "\n\nA multiplicação é de: " << RESULT;

  return 0;
}