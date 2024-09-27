#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
		int x;
		int y;
		int z;
		
		cout << "De um valor para X: ";
		cin >> x;
		
		cout << "\nDe um valor para Y: ";
		cin >> y;
		
		cout << "\nDe um valor para Z: ";
		cin >> z;
		
		cout << "\n | X | Y | Z |\n\n";
		
		for(x, y, z; x<=150; x++, y-=3, z+=8){
			
			
			cout << " | " << x << " | ";
			cout << y << " | ";
			cout << z << " |\n";
		}
		
		
		
		
	return 0;
}
