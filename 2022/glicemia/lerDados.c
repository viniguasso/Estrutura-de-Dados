#include<stdio.h>
#include<stdlib.h>

typedef struct no {
  int valorGlicemia;
  char data[10];
  char hora[5];
  struct no *prox;
} Celula;

Celula *inserirPilha(int valor, Celula *topo) {
    Celula *novo = (Celula *)malloc(sizeof(Celula));
    novo->valorGlicemia = valor;
    novo->prox = topo;
    return novo;
}


Celula *inserirLista(int valor, Celula *lista){
    Celula *novo, *p, *pR;
    novo = (Celula *)malloc(sizeof(Celula));
    novo->valorGlicemia = valor;
    novo->prox = NULL;
    if (!lista)
        return novo;
    for (pR = NULL, p = lista; p; pR = p, p = p->prox) {
        if (valor < p->valorGlicemia) {
            break;
        }
    }
    if (p == lista) {
        novo->prox = lista;
        return novo;
    }
    else if (!p) {
        pR->prox = novo;
    }
    else {
        pR->prox = novo;
        novo->prox = p;
    }
    return lista;
}

int contarNos(Celula *topo) {
    int qtd = 0;
    Celula *p;
    for (p = topo; p; p = p->prox) {
        qtd++;
    }
    return qtd;
}

void exibirPilha(Celula *topo) {
    if (!topo) {
        printf("Pilha vazia!");
        return;
    }
    Celula *p;
    for (p = topo; p; p = p->prox) {
        printf("%d\n", p->valorGlicemia);
    }
}

void exibirLista(Celula *lista){
    if (!lista){
        printf("Pilha vazia!");
        return;
    }
    Celula *p;
    for (p = lista; p; p = p->prox){
        printf("%d\n", p->valorGlicemia);
    }
}

void popularDoArquivo(Celula **topo, Celula **lista) {   
    FILE* procurador;
    char nomeArquivo[200];

    int valor, dia, mes, hora, minuto;
	printf("Nome do arquivo: ");
	scanf("%s", nomeArquivo);
	procurador = fopen(nomeArquivo, "r");
	if (!procurador) {
		printf("Arquivo nao encontrado\n");
		exit(0);
	}
    
    int valor;

    int linha, valorGlicemia;

    int posicaoEspaco = 0;
    while (!feof(procurador)){
        fgets(linha, 200, procurador);
		printf("%d", linha);
        pilha1 = inserir(valor, pilha1);

        valorGlicemia = linha.substr(0,posicaoEspaco);
        *topo = inserirPilha(stoi(valorGlicemia), *topo);
        *lista = inserirLista(stoi(valorGlicemia), *lista);
    }

    fclose(procurador);
}

int main(void) {
	Celula *pilha1 = NULL; 
    Celula *pilhaImpares = NULL;
	FILE *procurador;
	char nomeArquivo[200];
    int valor, dia, mes, hora, minuto;
	printf("Nome do arquivo: ");
	scanf("%s", nomeArquivo);
	procurador = fopen(nomeArquivo, "r");
	if (!procurador) {
		printf("Arquivo nao encontrado\n");
		exit(0);
	}
	do {
		fscanf(procurador, "%d - %d/%d, %d:%d\n", &valor, &dia, &mes, &hora, &minuto);
		pilha1 = inserir(valor, pilha1);
	} while(!feof(procurador));
	fclose(procurador);
    printf("Valor do ultimo elemento: %d\n", pilha1->valorGlicemia);
    printf("O tamanho da pilha um e: %d\n", contarNos(pilha1));
    exibir(pilha1);
	return 1;
}