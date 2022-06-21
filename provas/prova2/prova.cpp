#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

#include "arvores.h"

int main() {
	// 1)
    	ifstream procurador;
	char nomeArquivo[200];
	cout << "Nome do arquivo fonte com os numeros: ";
	cin >> nomeArquivo;

	procurador.open(nomeArquivo);
	if (!procurador) {
		cout << "Arquivo nao localizado!\n";
		exit(0);
	}

	int valor;
	Arvore *raiz = NULL;
	do {
		procurador >> valor;
		raiz = inserir(valor, raiz);
	} while(!procurador.eof());
	procurador.close();
	exibir(raiz,0);

	// 2)
    	int menor = menorElemento(raiz)->valor;
	int menorNivel = localizarNivel(menor, raiz);
    	int maior = maiorElemento(raiz)->valor;
	int maiorNivel = localizarNivel(maior, raiz);
	
	if (maiorNivel == menorNivel) {
		cout << "O menor valor e o maior estao no mesmo nivel." << endl;
	} else {
		cout << "O menor valor e o maior nao estao no mesmo nivel." << endl;
	}

	// 3)
	cout << "Eh folha: " << verificarFolha(25, raiz) << endl;
    	return 1;
}
