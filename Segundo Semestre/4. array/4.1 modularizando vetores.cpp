#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>

using namespace std;

/*a) Verifica se um número existe no array
int verificarExistencia(int vetor[], int numero){
    cout << "Qual numero voce quer saber se tem na array: ";
    cin >> numero;
 if(numero == 5 || numero == 33 || numero == 89 || numero == 1 || numero == 23){
    cout << "\n\nSim, esse numero existe na array!\n\n";
 }else{
    cout << "\n\nNao, esse numero nao existe na array!\n\n";
 } 
}
*/
//----------------------------------------------------------------------------------------
/*b) Conta quantas vezes um determinado número aparece no array
int quantasVezes(int cont,int vetor[], int i){
    for(int i = 0; i < 10; i++){
    if(vetor[i] == 5){
    cont++;
    }
 }
 cout << "O numero 5 aparece " << cont << " vezes nessa array\n\n\n";
}
*/
//----------------------------------------------------------------------------------------
/*c) Substitua valores ímpares por pares aleatórios no array
double trocadePares(int vetor[], int N){
    srand(time(NULL));
    for(int i = 0; i < 6; i++){
    if(vetor[i] % 2 == 0){
    cout << vetor[i] << "  ";
    }
    if(vetor[i] % 2 != 0){
do{
     N = (rand() % 10) + 1;
   }while(N % 2 != 0);
        vetor[i] = N;
        cout << vetor[i] << "  ";
    }
}
}
*/
//----------------------------------------------------------------------------------------
/*d) Determina quantos números são divisíveis por um n no array
double valorDen(int vetor[],int N){
	int cont = 0;
	for(int i = 0; i < 5; i++){
		if(vetor[i] % N == 0){
    	cont++;
    }
}
return cont;
}
*/
//----------------------------------------------------------------------------------------
/*e) Inverte o array
double inverterArray(int vetor[], int N) {
    for(int i = 0; i < N / 2; i++) {
        int temp = vetor[i];
        vetor[i] = vetor[N - 1 - i];
        vetor[N - 1 - i] = temp;
    }
}
*/
//----------------------------------------------------------------------------------------
/*f) Calcula a variância dos valores de um array
double calcularMedia(int vetor[], int N) {
    double soma = 0;
    for(int i = 0; i < N; i++) {
        soma += vetor[i];
}
    return soma / N;
}
double calcularVariancia(int vetor[], int N) {
    double media = calcularMedia(vetor, N);
    double somaDesviosQuadrados = 0;
    for(int i = 0; i < N; i++) {
        somaDesviosQuadrados += pow(vetor[i] - media, 2);
}
    return somaDesviosQuadrados / N;
}
*/
//----------------------------------------------------------------------------------------
/*g) Calcula o desvio padrão dos valores de um array.
double calcularMedia(int vetor[], int n) {
    double soma = 0;
    for(int i = 0; i < n; i++) {
        soma += vetor[i];
    }
    return soma / n;
}
double calcularVariancia(int vetor[], int n) {
    double media = calcularMedia(vetor, n);
    double somaDesviosQuadrados = 0;
    for(int i = 0; i < n; i++) {
        somaDesviosQuadrados += pow(vetor[i] - media, 2);
    }
    return somaDesviosQuadrados / n;
}
double calcularDesvioPadrao(int vetor[], int n) {
    double variancia = calcularVariancia(vetor, n);
    return sqrt(variancia);
}
*/
//----------------------------------------------------------------------------------------

int main(){
setlocale(LC_ALL, "portuguese");

 /*a) Verifica se um número existe no array
 int vetor[5] = {5,33,89,1,23};
 int numero;
 int resultado;
 resultado = verificarExistencia(vetor, numero);
 cout << "\n\nO vetor era: {";
 	for(int i = 0; i < 5; i++){
 		cout << vetor[i] << ",";
}
	cout << "}";
	*/
//----------------------------------------------------------------------------------------
 /*b) Conta quantas vezes um determinado número aparece no array
 int vetor[10] = {5,7,8,2,5,8,7,7,5,5};
 int cont = 0;
 int resultado;
 int i;
 resultado = quantasVezes(cont,vetor,i);
 */
//----------------------------------------------------------------------------------------
 /*c) Substitua valores ímpares por pares aleatórios no array
 int vetor[6] = {1,2,3,4,5,6};
 int N;
 int resultado;
 resultado = trocadePares(vetor, N);
*/
//----------------------------------------------------------------------------------------
/*d) Determina quantos números são divisíveis por um n no array
int N, cont, vetor[5] = {22,23,24,25,26};
int resultado;
int i;
	cout << "Determine o valor de N: ";
	cin >> N;
	resultado = valorDen(vetor,N);
	cout << "\nNo vetor: { ";
    for(i = 0 ; i < 5; i++){
    	cout << vetor[i] << " ";
	}
	cout << "}";
	cout << "\n\n" << resultado << " números são divisiveis por " << N;
*/
//----------------------------------------------------------------------------------------
/*e) Inverte o array
int vetor[5] = {1, 2, 3, 4, 5};
int N = 5; 
    cout << "Array original: ";
    for(int i = 0; i < N; i++) {
        cout << vetor[i] << " ";
    }
	inverterArray(vetor, N);
    cout << "\n\nArray invertido: ";
    for(int i = 0; i < N; i++) {
        cout << vetor[i] << " ";
    }
*/
//----------------------------------------------------------------------------------------
/*f) Calcula a variância dos valores de um array

int vetor[5] = {23, 44, 11, 3, 21};
int N = 5; 
    double variancia = calcularVariancia(vetor, N);
    cout << "A variância do array é: " << variancia << endl;
*/
//----------------------------------------------------------------------------------------
/*g) Calcula o desvio padrão dos valores de um array.
int vetor[5] = {25, 49, 11, 8, 33};
int n = 5;  
    double desvioPadrao = calcularDesvioPadrao(vetor, n);
    cout << "O desvio padrão do array é: " << desvioPadrao << endl;
*/
//----------------------------------------------------------------------------------------
}


