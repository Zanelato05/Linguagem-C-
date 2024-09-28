#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmath>
using namespace std;

void somaum(int &valor){
  valor = valor + 1;
//  5   =   5   + 1
//valor = 6
}

int main (){
  
  setlocale(LC_ALL, "portuguese");

  int x = 5;
  somaum(x);//x = 6
  cout << x << endl;
  //x = 6
  return 0;
}