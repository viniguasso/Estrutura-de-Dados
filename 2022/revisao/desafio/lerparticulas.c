#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    FILE *procurador, *procuradorSaida;
    char nomeArquivo[200];
    int x, y, qtdParticulas=0, conta1q=0, conta2q=0, conta3q=0, conta4q=0, contaOrigem=0;
    // abrir um arquivo de saída
    printf("Qual o nome do arquivo de saida contendo os numeros? ");
    gets(nomeArquivo); //scanf("%s", nomeArquivo);
    procurador = fopen(nomeArquivo, "r");
    if (!procurador) {
        printf("Arquivo não localizado.");
        exit(0);
    }

    // percorrer o arquivo/procurador extraindo de cada linha x e y
    do {
        fscanf(procurador, "%d, %d", &x, &y);
        qtdParticulas ++;
        if (x>0 && y>0) {
            conta1q ++;
        }
        else if (x<0 && y>0) {
            conta2q ++;
        }
        else if (x<0 && y<0) {
            conta3q ++;
        }
        else if (x>0 && y<0) {
            conta4q ++;
        }
        else if (x==0 && y==0) {
            contaOrigem ++;
        }
    } while(!feof(procurador));

    //exibir
    procuradorSaida = fopen("relatorio.txt", "w");
    fprintf(procuradorSaida,"Foram analisadas %d particulas:\n\n", qtdParticulas);
    fprintf(procuradorSaida,"				|\n				|\n	2ºQ = %d		|		1ºQ = %d\n				|\n", conta2q, conta1q);
    fprintf(procuradorSaida,"------------- O = %d -------------\n", contaOrigem);
	fprintf(procuradorSaida,"				|\n	3ºQ = %d    	|		4ºQ = %d\n				|\n				|\n", conta3q, conta4q);

    fclose(procuradorSaida);
    fclose(procurador);
    return 1;
}