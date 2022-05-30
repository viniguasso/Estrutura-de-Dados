//  Criar um algoritmo para ler 10 números inteiros e exibi-los, ao final do algoritmo, em ordem crescente e decrescente.
#include <stdio.h>

void solicitar(), calcular(), exibir();
int numero[10], i, j, maior;

int main() {
	solicitar();
	calcular();
	exibir();
	return 0;
}

void solicitar() {
	for (i=0; i<10; i++){
		printf("Digite o %dº número: ", (i+1));
    	scanf("%d", &numero[i]);
  	}
}
void calcular() {
	for (i=0; i<10; ++i) {
		for (j = i+1; j<10; j++) {
			if (numero[i] > numero[j]) {
				maior = numero[i];
				numero[i] = numero[j];
				numero[j] = maior;
			}
		}
	}
}
void exibir() {
	printf("\nOrdem crescente: ");
	for (i=0; i<10; i++) {
    	printf("%d ", numero[i]);
	}
	printf("\n\nOrdem decrescente: ");
	for (i=9; i>=0; i--) {
    	printf("%d ", numero[i]);
	}
}