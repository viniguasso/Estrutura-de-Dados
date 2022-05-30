#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    FILE *procurador;
    char nomeArquivo[200];
    int qtdDados, valor, dia, mes, hora, minuto;
    
    printf("Qual o nome do arquivo de saida contendo os dados de Glicemia? ");
    gets(nomeArquivo); 
    procurador = fopen(nomeArquivo, "w");

    printf("Quantos qtdDados deseja gerar? ");
    scanf("%d", &qtdDados);

    srand(time(NULL));
    for( ; qtdDados>0; qtdDados--) {
        valor = 70 + (rand() % 150);
        dia = 1 + (rand() % 31);
        mes = 1 + (rand() % 12);
        hora = rand() % 24;
        minuto = rand() % 60;
        fprintf(procurador, "%d - %.2d/%.2d, %.2d:%.2d\n", valor, dia, mes, hora, minuto);
        fflush(procurador);
    }
    fclose(procurador);
    return 1;
}