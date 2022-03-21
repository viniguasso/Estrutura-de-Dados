#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *prox; //ponteiro para o próximo elemento dessa estrutura
} Celula;

Celula *inserir(int valor, Celula *topo) {
    // alocar memória
    Celula *novo = (Celula *)malloc(sizeof(Celula));
    
    // depositar valor
    novo->dado = valor;

    // engatar o novo último
    novo->prox = topo;

    // retornar o novo topo
    return novo;
}

Celula *remover(Celula *topo) {
    // testar se pilha vazia
    if (topo == NULL) {
        printf("Pilha vazia: Operação não realizada.\n");
        return topo;
    }

    // ponteiro lixo apontar para o topo/último
    Celula *lixo = topo;

    // topo avança
    topo = topo->prox;
    
    // liberar lixo
    free(lixo);

    // retornar novo topo
    return topo;
} 

int contarNos(Celula *topo) {
    int qtd = 0;
    Celula *p;
    for (p = topo; p; p = p->prox) {
        qtd++;
    }
    return qtd;
}

int main() {
    Celula *pilha1 = NULL; //pilha 1 é um ponteiro Celula que vai apontar para o último elemento inserido
    Celula *pilhaImpares = NULL; //pilhaImpares é um ponteiro de Celula que vai apontar para o último elemento inserido

    pilha1 = inserir(15, pilha1);
    pilha1 = inserir(10, pilha1);
    pilha1 = inserir(5, pilha1);
    pilha1 = inserir(25, pilha1);
    pilha1 = inserir(100, pilha1);

    pilha1 = remover(pilha1);

    printf("Endereço do ultimo elemento: %p\n", pilha1);
    printf("Valor do ultimo elemento: %d\n", pilha1->dado);
    
    return 1;
}