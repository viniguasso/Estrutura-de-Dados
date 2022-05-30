#include <stdio.h>
int main() {
  	char matriz[2][5];
  	int linha, coluna;
  	for(linha=0; linha<2; linha++) {
    	for(coluna=0; coluna<5; coluna++) {
      		printf("Digite um caractere:\n");
      		scanf("%s", &matriz[linha][coluna]);  
    	}
  	}
	printf("\n");
 	for(linha=0; linha<2; linha++) {
    	for(coluna=0; coluna<5; coluna++) {
    		printf("%c ", matriz[linha][coluna]);
		}
		printf("\n");
	}
	for(linha=0; linha<2; linha++) {
    	for(coluna=0; coluna<5; coluna++) {
			switch(matriz[linha][coluna]) {
				case 'a': {
					printf("\nVogal digitada (linha %d x coluna %d): %c\n", linha+1, coluna+1, matriz[linha][coluna]);
					break;
    			}
				case 'e': {
      				printf("\nVogal digitada (linha %d x coluna %d): %c\n", linha+1, coluna+1, matriz[linha][coluna]);
      				break;
    			}
				case 'i': {
      				printf("\nVogal digitada (linha %d x coluna %d): %c\n", linha+1, coluna+1, matriz[linha][coluna]);
					break;
    			}
				case 'o': {
      				printf("\nVogal digitada (linha %d x coluna %d): %c\n", linha+1, coluna+1, matriz[linha][coluna]);
					break;
    			}
				case 'u': {
      				printf("\nVogal digitada (linha %d x coluna%d): %c\n", linha+1, coluna+1, matriz[linha][coluna]);
					break;
    			}
			}
		}
  		printf("\n");
  	}
  	return 0;
} 