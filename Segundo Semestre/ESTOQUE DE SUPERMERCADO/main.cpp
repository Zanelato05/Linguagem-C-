#include "supermercado.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
	string arquivoEstoque = "estoque.txt";
	string arquivoCompras;
	float totalVendas = 0.0;

	vector<Produto> estoque = carregarEstoque(arquivoEstoque);

	while (true) {
		cout << "Digite o nome do arquivo de compras do cliente ou 'sair' para encerrar: ";
		cin >> arquivoCompras;

		if (arquivoCompras == "sair") {
			break;
		}

		totalVendas += processarListaDeCompras(estoque, arquivoCompras);

		salvarEstoque(estoque, arquivoEstoque);
	}

	cout << "Estoque atualizado! Total arrecadado: R$ " << fixed << setprecision(2) << totalVendas << "\n";

	return 0;
}
