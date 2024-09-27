#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int N = 0;
	
	while ( N < 10){
		
		cout << N;
	}
	
		
	return 0;
}
