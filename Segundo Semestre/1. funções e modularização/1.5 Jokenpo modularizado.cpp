#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int PEDRA = 1;
const int PAPEL = 2;
const int TESOURA = 3;

int obterEscolhaJogador() {
    int escolha;
    cout << "Escolha: 1 - pedra, 2 - papel, 3 - tesoura: " << endl;
    cin >> escolha;
    return escolha;
}

int obterEscolhaComputador() {
    int escolha = rand() % 3 + 1;
    return escolha;
}

string determinarVencedor(int escolhaJogador, int escolhaComputador) {
    string vencedor;
    if (escolhaJogador == escolhaComputador) {
        vencedor = "empate";
    } else if ((escolhaJogador == PEDRA && escolhaComputador == TESOURA) ||
               (escolhaJogador == PAPEL && escolhaComputador == PEDRA) ||
               (escolhaJogador == TESOURA && escolhaComputador == PAPEL)) {
        vencedor = "jogador";
    } else {
        vencedor = "computador";
    }
    return vencedor;
}

void informarVencedor(string vencedor){
    if(vencedor != "empate"){
        cout << "o vencedor é " << vencedor << endl;
    }else{
        cout << "empate!" << endl;
    }  
}

bool determinarJogarNovamente() {
    char respostaUsuario;
    bool jogarNovamente;
    cout << "Jogar novamente? (s/n): ";
    cin >> respostaUsuario;
    if (respostaUsuario == 's'){
       jogarNovamente = true;
    }else{
       jogarNovamente = false;
    }
    return jogarNovamente;
}

int main() {
    srand(time(0));
    bool jogarNovamente;
    do {
        int escolhaJogador = obterEscolhaJogador();
        int escolhaComputador = obterEscolhaComputador(); 
        string vencedor = determinarVencedor(escolhaJogador,escolhaComputador);
        informarVencedor(vencedor);
        jogarNovamente = determinarJogarNovamente();

    } while (jogarNovamente);
    
    cout << "Obrigado por jogar!" << endl;
    return 0;
}
