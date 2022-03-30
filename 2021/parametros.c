// Exercício 02: crie um algoritmo, de livre contexto, que utilize funções com e sem parâmetros.
#include <stdio.h>

void escolher_m();
float vel;
char opcao;

int main() {
	printf("\n\tConversor de Velocidade");
	printf("\n\nEscolha a conversão desejada:\n\n");
	printf("\t(k) Km/h -> M/s\n\t(m) M/s -> Km/h");
	printf("\n\nOpção: ");
	scanf(" %c", &opcao);
	escolher_m();
	return 0;
}
void escolher_m() {
	switch (opcao) { 
		case 'k': { 
			printf("\nDigite a velocidade em km/h: ");
			scanf("%f", &vel);
			printf("\nM/s: %.2f", vel/3.6);
			break;
		}
		case 'm': {
			printf("\nDigite a velocidade em m/s: ");
			scanf("%f", &vel);
			printf("\nKm/s: %.2f", vel*3.6);
			break;
		}
		default: { 
			printf("\n\nCaractere inválido!\n\n");
		}
	}
}