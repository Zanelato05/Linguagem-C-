#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
#include <iomanip>

using namespace std;

// Função para carregar os produtos e seus preços do arquivo "produtos.txt"
map<string, double> carregarProdutos() {
    map<string, double> produtos;
    ifstream arquivoProdutos("produtos.txt");

    if (!arquivoProdutos.is_open()) {
        cout << "Erro ao abrir o arquivo de produtos!" << endl;
        return produtos;
    }

    string linha;
    while (getline(arquivoProdutos, linha)) {
        istringstream iss(linha);
        string nomeProduto;
        double precoProduto;

        getline(iss, nomeProduto, ':');
        iss >> precoProduto;

        produtos[nomeProduto] = precoProduto;
    }

    arquivoProdutos.close();
    return produtos;
}

// Função para exibir a lista de produtos disponíveis
void exibirProdutos(const map<string, double>& produtos) {
    cout << "Produtos disponíveis:" << endl;
    for (const auto& produto : produtos) {
        cout << produto.first << " - R$ " << fixed << setprecision(2) << produto.second << endl;
    }
}

// Função para realizar o orçamento
void fazerOrcamento(const map<string, double>& produtos) {
    vector<pair<string, double>> itensSelecionados;
    string nomeProduto;
    char resposta;
    double total = 0;

    do {
        cout << "Digite o nome do produto que deseja adicionar ao orçamento: ";
        getline(cin, nomeProduto);

        // Verificar se o produto está na lista
        if (produtos.find(nomeProduto) != produtos.end()) {
            double preco = produtos.at(nomeProduto);
            itensSelecionados.push_back({nomeProduto, preco});
            total += preco;

            cout << nomeProduto << " adicionado ao orçamento. Preço: R$ " << fixed << setprecision(2) << preco << endl;
        } else {
            cout << "Produto não encontrado." << endl;
        }

        cout << "Deseja adicionar outro produto? (s/n): ";
        cin >> resposta;
        cin.ignore();  // Limpa o buffer do teclado
    } while (tolower(resposta) == 's');

    // Exibir o orçamento final
    cout << "\nOrçamento final:\n";
    for (const auto& item : itensSelecionados) {
        cout << item.first << " - R$ " << fixed << setprecision(2) << item.second << endl;
    }
    cout << "Valor total do orçamento: R$ " << fixed << setprecision(2) << total << endl;
}

int main() {
    // Carregar a lista de produtos do arquivo
    map<string, double> produtos = carregarProdutos();

    // Verificar se há produtos carregados
    if (produtos.empty()) {
        cout << "Nenhum produto disponível no momento." << endl;
        return 1;
    }

    // Exibir a lista de produtos
    exibirProdutos(produtos);

    // Realizar o orçamento
    fazerOrcamento(produtos);

    return 0;
}
