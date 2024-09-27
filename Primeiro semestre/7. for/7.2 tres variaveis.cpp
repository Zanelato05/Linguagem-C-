#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
		int x;
		int y;
		int z;
		
		cout << "X   Y   Z\n\n";
		
		for(x=0, y=1, z=0; x<=10; x++, y+=2, z+=2){
			
			
			cout << x << " - ";
			cout << y << " - ";
			cout << z << "\n";
		}
		
		
		
		
	return 0;
}
