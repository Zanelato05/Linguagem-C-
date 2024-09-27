#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int matriz [3][4];
	int l,c;
	
	for(l = 0; l < 3; l++){
		
		for(c = 0; c < 4; c++){
			
			matriz [l][c] = l;
		}
	}
	
	for(l = 0; l < 3; l++){
		
		for(c = 0; c < 4; c++){
			
			cout << matriz [l][c] << " ";
		}
		cout << "\n";
	}
	
		
	return 0;
}
