#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct no {
	int dado;
	struct no *prox;
} Celula;

Celula *inserirR(int valor, Celula *lista) {
	if (lista && valor > lista->dado) {
		//avançar até o final ou até a posição correta
		lista->prox = inserirR(valor, lista->prox);
		return lista;
	} else {
			Celula *novo = (Celula *)malloc(sizeof(Celula));
			novo->dado = valor;
			novo->prox = lista; //atenção neste ponto
			return novo;
	}
}

void exibirR(Celula *lista) {
	if (lista) {
		//exibir
		cout << lista->dado << endl;
		exibirR(lista->prox);
	}
}

int somarR(Celula *lista) {
	if (lista) {
		return lista->dado + somarR(lista->prox);	
	}
	return 0;
}

int contarParesR(Celula *lista) {
	if (lista) {
		if (lista->dado % 2 == 0)
			return 1 + contarParesR(lista->prox); //empilho contando 1 par
		return 0 + contarParesR(lista->prox); //empilho contando 0
	}
	return 0; //passei por toda a lista
}

int somaParesR(Celula *lista) {
	
}

int contarNosR(Celula *lista) {
	if (lista) {
		return 1 + contarNosR(lista->prox);
	}
	return 0; //passei por toda a lista
}

int main () {
	Celula *lista = NULL;

	lista = inserirR(45, lista);
	lista = inserirR(5, lista);
	lista = inserirR(4, lista);
	lista = inserirR(12, lista);
	exibirR(lista);

	cout << "Na lista tem " << contarNosR(lista) << " elementos." << endl;
	cout << "A soma dos elementos do vetor é " << somarR(lista) << endl;
	cout << "A quantidade de pares é: " << contarParesR(lista) << endl;
	cout << "A soma dos pares é: " << somaParesR(lista) << endl;

	return 1;
}