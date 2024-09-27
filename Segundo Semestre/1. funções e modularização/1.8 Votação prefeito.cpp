#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <time.h>
#include <cmath>

using namespace std;

double obterVoto(){
  int voto;
  cout << "\n\nQual candidato você deseja votar: ";
  cin >> voto;
  return voto;
}

int obterVerificacao(int votoCarlos, int votoOsmar, int votoRobison){
	
	if(votoCarlos > votoOsmar && votoCarlos > votoRobison){
    cout << "\n\nCarlos Chiodini é o novo prefeito de Itajaí!";
 	}else if(votoOsmar > votoCarlos && votoOsmar > votoRobison){
    cout << "\n\nOsmar Teixeira é o novo prefeito de Itajaí!";
  	}if(votoRobison > votoOsmar && votoRobison > votoCarlos){
    cout << "\n\nRobison Coelho é o novo prefeito de Itajaí!";
  	}
}

int main(){
	
	setlocale(LC_ALL, "portuguese");

 int i, voto, votoCarlos=0, votoOsmar=0, votoRobison=0, resultado;
 
  cout << "**CANDIDATOS A PREFEITO DE ITAJAÍ**";
  cout << "\n\nCarlos Chiodini - 1570" << endl;
  cout << "Osmar Teixeira - 77777" << endl;
  cout << "Robison Coelho - 2354" << endl;
  
  
  for(i=1; i<6; i++){
    voto = obterVoto();
    if(voto == 1570){
      votoCarlos++;
    }else if(voto == 77777){
      votoOsmar++;
    }else if(voto == 2354){
      votoRobison++;
    }
    else{
      cout << "\n\nNenhum candidato corresponde a esse número." << endl;
      i--;
    }
  }  
  
 	resultado = obterVerificacao(votoCarlos, votoOsmar, votoRobison);
 	
  return 0;
}
