#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    FILE *procurador;
    char nomeArquivo[200];
    int qtdNumeros;
    printf("Qual o nome do arquivo de saida contendo os numeros? ");
    scanf("%s", nomeArquivo);
    //Verificar se o arquvio ja existe. Se sim, encerra o programa, se não, fecha e abre o modo esxrita w
    procurador = fopen(nomeArquivo, "r");
    if (procurador) {
        printf("Arquivo ja existe, programa será finalizado");
        fclose(procurador);
        exit(0);
    }
    procurador = fopen(nomeArquivo, "w");
    printf("Quantos numeros quer gerar no arquivo? ");
    scanf("%d", &qtdNumeros);
    int valor;
    srand(time(NULL));
    for( ; qtdNumeros>0; qtdNumeros--) {
        valor = rand() % 1000;
        fprintf(procurador, "%d\n", valor);
        fflush(procurador);
    }
    fclose(procurador);
    return 1;
}