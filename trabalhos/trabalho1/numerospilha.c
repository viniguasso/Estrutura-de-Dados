#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *prox;
} Celula;

Celula *inserir(int valor, Celula *topo) {
    Celula *novo = (Celula *)malloc(sizeof(Celula));
    novo->dado = valor;
    novo->prox = topo;
    return novo;
}

int contarNos(Celula *topo) {
    int qtd = 0;
    Celula *p;
    for (p = topo; p; p = p->prox) {
        qtd++;
    }
    return qtd;
}

void exibir(Celula *topo) {
    if (!topo) {
        printf("Pilha vazia!");
        return;
    }
    Celula *p;
    for (p = topo; p; p = p->prox) {
        printf("%d\t", p->dado);
    }
}

int main(void) {
	int valor;
	Celula *pilha1 = NULL; 
    Celula *pilhaImpares = NULL;
	FILE *procurador;
	char nomeArquivo[200], linha[200];
	printf("Nome do arquivo: ");
	scanf("%s", nomeArquivo);
	procurador = fopen(nomeArquivo, "r");
	if (!procurador) {
		printf("Arquivo não encontrado\n");
		exit(0);
	}
	do {
		fscanf(procurador, "%d", &valor);
		pilha1 = inserir(valor, pilha1);

	}while(!feof(procurador));
	fclose(procurador);

	printf("Endereço do ultimo elemento: %p\n", pilha1);
    printf("Valor do ultimo elemento: %d\n", pilha1->dado);
    printf("O tamanho da pilha um e: %d\n", contarNos(pilha1));
    exibir(pilha1);
	return 1;
}