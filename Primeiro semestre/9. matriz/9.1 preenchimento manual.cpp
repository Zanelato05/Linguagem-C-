#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int matriz [3][4];
	int l,c;
	
	matriz[0][0]=0;
	matriz[0][1]=0;
	matriz[0][2]=0;
	matriz[0][3]=0;
	matriz[1][0]=1;
	matriz[1][1]=1;
	matriz[1][2]=1;
	matriz[1][3]=1;
	matriz[2][0]=2;
	matriz[2][1]=2;
	matriz[2][2]=2;
	matriz[2][3]=2;
	
	cout << matriz[0][0] << " ";
	cout << matriz[0][1] << " ";
	cout << matriz[0][2] << " ";
	cout << matriz[0][3] << "\n";
	cout << matriz[1][0] << " ";
	cout << matriz[1][1] << " ";
	cout << matriz[1][2] << " ";
	cout << matriz[1][3] << "\n";
	cout << matriz[2][0] << " ";
	cout << matriz[2][1] << " ";
	cout << matriz[2][2] << " ";
	cout << matriz[2][3] << " ";
	
	return 0;
}
