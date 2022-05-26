#include <iostream>
#define TAM 3
using namespace std;

void popularR(int *vetor, int n) {
	if (n > 0) {
		//codigo ao empilhar
		vetor[n - 1] = rand() % 20;
		
		//PONTO DE RECURSÃO
		popularR(vetor, n - 1);
		
		//codigo ao desempilhar
		
	}
}

void exibirCrescenteR(int *vetor, int n) {
	if (n > 0) {
		//codigo ao empilhar
		
		
		//PONTO DE RECURSÃO
		exibirCrescenteR(vetor, n - 1);
		
		//codigo ao desempilhar
		cout << vetor[n - 1] << endl;
	}
}

void exibirDecrescenteR(int *vetor, int n) {
	if (n > 0) {
		//codigo ao empilhar
		cout << vetor[n - 1] << endl;
		
		//PONTO DE RECURSÃO
		exibirDecrescenteR(vetor, n - 1);
		
		//codigo ao desempilhar

		
	}
}

int somarR(int *vetor, int n) {
	if (n > 0) {
		return vetor[n - 1] + somarR(vetor, n - 1);	
	}
	return 0;
}

int maiorR(int *vetor, int n) {
	if (n > 0) {
		int vemDeCima = maiorR(vetor, n - 1);
		if (vemDeCima > vetor[n - 1]) return vemDeCima;
		return vetor[n - 1];
	}
	return vetor[n];
}

int main () {
	int quantidade = TAM;
	int vetor[TAM];
	srand(time(NULL));
	popularR(vetor, TAM); //void
	exibirCrescenteR(vetor, TAM); //void
	exibirDecrescenteR(vetor, TAM); //void

	//return
	cout << "A soma dos elementos do vetor é: " << somarR(vetor, TAM) << endl;
	
	cout << "O maior valor do vetor é: " << maiorR(vetor, TAM) << endl;
	
	return 1;
}