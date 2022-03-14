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
        fscanf(procurador, "%d,%d", &x, &y);
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
    fprintf(procuradorSaida,"Foram analisadas %d particulas\n", qtdParticulas);
    fprintf(procuradorSaida,"1º Quadrante %d\n", conta1q);
    fprintf(procuradorSaida,"2º Quadrante %d\n", conta2q);
    fprintf(procuradorSaida,"3º Quadrante %d\n", conta3q);
    fprintf(procuradorSaida,"4º Quadrante %d\n", conta4q);
    fprintf(procuradorSaida,"Origem %d\n", contaOrigem);

    fclose(procuradorSaida);
    fclose(procurador);
    return 1;
}