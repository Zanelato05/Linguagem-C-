#include <iostream>

using namespace std;

int main(){

 int var = 15;
 cout << "Conteudo de var: " << var << endl;
 cout << "\nConteudo de var: " << &var << endl;

 int *ptr = &var;

 cout << "\nConteudo de ptr: " << ptr << endl;
 cout << "\nConteudo de apontado: " << *ptr << endl;
 cout << "\nEndereco de ptr: " << &ptr << endl << endl;

 *ptr = 73;

 cout << "Conteudo de var: " << var << endl;

 int y = 250;
 ptr = &y;
 cout << "\nConteudo de Y: " << *ptr << endl;

 int z = -10;
 int *ptr2 = &z;
 ptr = ptr2;
 cout << "\nConteudo de ptr2: " << *ptr << endl;

 ptr = nullptr;

 if(ptr != nullptr){
     cout << "\nConteudo apontado por ptr: " << *ptr << endl;
 }else{
     cout << "\nNulo";
 }
}