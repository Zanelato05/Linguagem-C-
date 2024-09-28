#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

// Função para registrar as médias dos alunos
void registrarMedia() {
    string arquivoNome = "medias.txt";
    ofstream arquivo;
    arquivo.open(arquivoNome, ios::app);
    if (!arquivo.is_open()) {
        cout << "Não foi possível abrir o arquivo!" << endl;
        return;
    }

    string nomeAluno;
    double m1, m2, m3;
    char resposta;

    do {
        cout << "Qual o nome do aluno? ";
        getline(cin, nomeAluno);
        cout << "Digite as 3 médias separadas por espaço: ";
        cin >> m1 >> m2 >> m3;

        arquivo << nomeAluno << ":" << m1 << "," << m2 << "," << m3 << endl;

        cout << "Deseja registrar um novo aluno (s/n)? ";
        cin >> resposta;
        resposta = tolower(resposta);
        cin.ignore();  // Limpa o buffer do teclado

    } while (resposta == 's');

    arquivo.close();
    cout << "Médias registradas com sucesso!" << endl;
}

// Função para determinar aprovação ou reprovação
void determinarAprovados() {
    ifstream arquivoMedias("medias.txt");
    ofstream arquivoSituacoes("situacoes.txt");
    if (!arquivoMedias.is_open() || !arquivoSituacoes.is_open()) {
        cout << "Erro ao abrir um dos dois arquivos!" << endl;
        return;
    }

    string linha;
    while (getline(arquivoMedias, linha)) {
        istringstream iss(linha);
        string nome, media;
        double mediaFinal = 0;
        getline(iss, nome, ':');
        while (getline(iss, media, ',')) {
            mediaFinal += stod(media);
        }
        mediaFinal /= 3;  // Média das três notas

        string situacao = (mediaFinal >= 6) ? "aprovado" : "reprovado";
        arquivoSituacoes << nome << " -> " << situacao << endl;
    }

    arquivoMedias.close();
    arquivoSituacoes.close();
    cout << "Situações registradas com sucesso!" << endl;
}

// Função para calcular estatísticas
void calcularEstatisticas() {
    ifstream arquivoMedias("medias.txt");
    if (!arquivoMedias.is_open()) {
        cout << "Erro ao abrir o arquivo de médias!" << endl;
        return;
    }

    string linha;
    double somaMedias = 0, maiorMedia = -1, menorMedia = 11;
    int totalAlunos = 0, aprovados = 0;
    string nomeMaiorMedia, nomeMenorMedia;

    while (getline(arquivoMedias, linha)) {
        istringstream iss(linha);
        string nome, media;
        double mediaFinal = 0;
        getline(iss, nome, ':');
        while (getline(iss, media, ',')) {
            mediaFinal += stod(media);
        }
        mediaFinal /= 3;

        somaMedias += mediaFinal;
        totalAlunos++;

        if (mediaFinal >= 6) {
            aprovados++;
        }

        if (mediaFinal > maiorMedia) {
            maiorMedia = mediaFinal;
            nomeMaiorMedia = nome;
        }
        if (mediaFinal < menorMedia) {
            menorMedia = mediaFinal;
            nomeMenorMedia = nome;
        }
    }

    double mediaGeral = somaMedias / totalAlunos;
    double percentualAprovacao = (double)aprovados / totalAlunos * 100;

    ofstream arquivoEstatisticas("estatisticas.txt");
    arquivoEstatisticas << fixed << setprecision(2);
    arquivoEstatisticas << "Média geral da turma: " << mediaGeral << endl;
    arquivoEstatisticas << "Maior média: " << maiorMedia << " (" << nomeMaiorMedia << ")" << endl;
    arquivoEstatisticas << "Menor média: " << menorMedia << " (" << nomeMenorMedia << ")" << endl;
    arquivoEstatisticas << "Percentual de aprovação: " << percentualAprovacao << "%" << endl;

    arquivoMedias.close();
    arquivoEstatisticas.close();

    cout << "Estatísticas calculadas e salvas em 'estatisticas.txt'." << endl;
}

// Função para buscar notas de um aluno
void buscarAlunoPorNome(const string& nomeBusca) {
    ifstream arquivoMedias("medias.txt");
    if (!arquivoMedias.is_open()) {
        cout << "Erro ao abrir o arquivo de médias!" << endl;
        return;
    }

    string linha;
    bool encontrado = false;
    while (getline(arquivoMedias, linha)) {
        if (linha.find(nomeBusca) != string::npos) {
            cout << "Aluno encontrado: " << linha << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Aluno não encontrado." << endl;
    }

    arquivoMedias.close();
}

// Função para encontrar o aluno com maior e menor média
void buscarMaiorMenorMedia() {
    ifstream arquivoMedias("medias.txt");
    if (!arquivoMedias.is_open()) {
        cout << "Erro ao abrir o arquivo de médias!" << endl;
        return;
    }

    string linha;
    double maiorMedia = -1, menorMedia = 11;
    string nomeMaiorMedia, nomeMenorMedia;

    while (getline(arquivoMedias, linha)) {
        istringstream iss(linha);
        string nome, media;
        double mediaFinal = 0;
        getline(iss, nome, ':');
        while (getline(iss, media, ',')) {
            mediaFinal += stod(media);
        }
        mediaFinal /= 3;

        if (mediaFinal > maiorMedia) {
            maiorMedia = mediaFinal;
            nomeMaiorMedia = nome;
        }
        if (mediaFinal < menorMedia) {
            menorMedia = mediaFinal;
            nomeMenorMedia = nome;
        }
    }

    cout << "Aluno com maior média: " << nomeMaiorMedia << " com média " << maiorMedia << endl;
    cout << "Aluno com menor média: " << nomeMenorMedia << " com média " << menorMedia << endl;

    arquivoMedias.close();
}

int main() {
    int opcao;
    string nomeBusca;

    do {
        cout << "Escolha uma opção:\n";
        cout << "1. Registrar médias\n";
        cout << "2. Determinar aprovação\n";
        cout << "3. Calcular estatísticas\n";
        cout << "4. Buscar aluno por nome\n";
        cout << "5. Encontrar aluno com maior e menor média\n";
        cout << "6. Sair\n";
        cout << "Opção: ";
        cin >> opcao;
        cin.ignore();  // Limpar o buffer

        switch (opcao) {
            case 1:
                registrarMedia();
                break;
            case 2:
                determinarAprovados();
                break;
            case 3:
                calcularEstatisticas();
                break;
            case 4:
                cout << "Digite o nome do aluno: ";
                getline(cin, nomeBusca);
                buscarAlunoPorNome(nomeBusca);
                break;
            case 5:
                buscarMaiorMenorMedia();
                break;
            case 6:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    } while (opcao != 6);

    return 0;
}