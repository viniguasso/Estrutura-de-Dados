// Revisão arquivos, struct, matrizes e funções
// Construir um programa que receba nome, altura de um possível atleta.
#include <stdio.h>
#define TAM 2

typedef struct{
	char nome[10];
	float altura, peso;
}atleta;

char *escolhe(atleta a);

int main(void) {
	atleta umatleta;
	printf("\nQual seu nome? ");
	scanf("%s", umatleta.nome);
	printf("\nQual o seu peso em KG? ");
	scanf("%f", &umatleta.peso);
	printf("\nQual a sua altura em cm? ");
	scanf("%f", &umatleta.altura);
	char *resposta = escolhe(umatleta);
	printf("\nEsporte: %s", resposta);
}

char *escolhe(atleta a) {
	if (a.altura<180 && a.peso<70) {
		return "Atletismo";
	}
	else if (a.altura>180 && a.peso<70) {
		return "Volei ou BVasquete";
	}
	return "Futebol";
}