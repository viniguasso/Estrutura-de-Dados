#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    FILE *procurador;
    char nomeArquivo[200];
    int x, y;
    int qtdParticulas;
    // abrir um arquivo de saída
    printf("Qual o nome do arquivo de saida contendo os numeros? ");
    gets(nomeArquivo); //scanf("%s", nomeArquivo);
    procurador = fopen(nomeArquivo, "w");

    // quantidade de particulas x e y
    printf("Quantas particulas deseja gerar? ");
    scanf("%d", &qtdParticulas);

    //popular o arquivo com qtdParticulas x, y
    srand(time(NULL));
    for( ; qtdParticulas>0; qtdParticulas--) {
        x = 100 - rand() % 200;
        y = 100 - rand() % 200;
        fprintf(procurador, "%d, %d\n", x, y);
        fflush(procurador);
    }
    fclose(procurador);
    return 1;
}