#include <iostream>
using namespace std;


void imprimirarray(int *arr, int tamanho){
    for(int i = 0; i < tamanho; i++){

        cout << *arr << ",";
        arr++;
    }

}

int main(){

    int arr[] = {5,6,9,-8,3};
    int *ptr = arr;

    imprimirarray(ptr,5);

}