/* Nível 1) Apenas criar um tabuleiro para transpor o jogo do papel para o computador. Ao final do jogo, os jogadores observarão o resultado e decidirão quem venceu o jogo */

#include <stdio.h>
char casa[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int main() {
	int jogador = 1, escolha;
	char sinal;
	printf("\n\tJogo da Velha");
	printf("\n\nObs: Digite 0 se o jogo terminar antes de todas as casas serem preenchidas.");
	printf("\n\nAperte ENTER para iniciar o jogo: ");
	getchar();
	printf("\e[H\e[2J");
	while (jogador) {
		printf("Jogador 1 (X)  -  Jogador 2 (O)\n\n");
		printf("     |     |     \n");
		printf("  %c  |  %c  |  %c \n", casa[1], casa[2], casa[3]);
		printf("_____|_____|_____\n     |     |     \n");
		printf("  %c  |  %c  |  %c \n", casa[4], casa[5], casa[6]);
		printf("_____|_____|_____\n     |     |     \n");
		printf("  %c  |  %c  |  %c \n", casa[7], casa[8], casa[9]);
		printf("     |     |     \n\n");
		if (casa[1] != '1' && casa[2] != '2' && casa[3] != '3' && casa[4] != '4' && casa[5] != '5' && casa[6] != '6' && casa[7] != '7' && casa[8] != '8' && casa[9] != '9') {
			break;
		}		
		else if (escolha == 0)
			break;
		jogador = (jogador % 2) ? 1 : 2;
		sinal = (jogador == 1) ? 'X' : 'O';
		printf("Jogador %d, digite um número:  ", jogador);
        scanf("%d", &escolha);
        printf("\e[H\e[2J");
		if (escolha == 1 && casa[1] == '1')
			casa[1] = sinal;					
		else if (escolha == 2 && casa[2] == '2')
			casa[2] = sinal;				
		else if (escolha == 3 && casa[3] == '3')
			casa[3] = sinal;				
		else if (escolha == 4 && casa[4] == '4')
			casa[4] = sinal;				
		else if (escolha == 5 && casa[5] == '5')
			casa[5] = sinal;				
		else if (escolha == 6 && casa[6] == '6')
			casa[6] = sinal;					
		else if (escolha == 7 && casa[7] == '7')
			casa[7] = sinal;				
		else if (escolha == 8 && casa[8] == '8')
			casa[8] = sinal;				
		else if (escolha == 9 && casa[9] == '9')
			casa[9] = sinal;
		else if (escolha == 0);
		else {
			printf("\e[H\e[2J");
			printf("Movimento inválido!\n\n");
			jogador--;
		}
		getchar();
		jogador++;
	}
	printf("Fim do Jogo"); 
}