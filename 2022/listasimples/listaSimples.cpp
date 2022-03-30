#include <iostream>
#include <cstdlib>
using namespace std;

//estrutura de dados
typedef struct no {
    int dado;
    struct no *prox;
} Celula;

Celula *inserir(int valor, Celula *lista) {
    Celula *novo, *p, *pR;
    //alocar memória
    novo = (Celula *)malloc(sizeof(Celula));

    //depositar valores
    novo->dado = valor;
    novo->prox = NULL;

    // localizar a posição de inserção
    // testar para a primeira vez
    if (!lista) return novo;

    for (pR = NULL, p = lista; p; pR = p, p = p->prox) {
        if (valor < p->dado) { //encontrar a posição
            break;
        }
    }
    //engatar
    if (p == lista) { //testar de no inicio
       novo->prox = lista; //ou novo->prox = p;
       return novo;
    } else if (!p) { //testar se no fim
        pR->prox = novo;
        return lista;
    } else { //no meio
        pR->prox = novo;
        novo->prox = p;
    }
    return lista; //retornar o inicio da lista
}

void exibir(Celula *lista) {
    if (!lista) {
        cout << "Lista vazia\n";
        return;
    }
    Celula *p;
    for (p = lista; p; p = p->prox) {
        cout << p->dado << endl;
    }
}

int main () {
    Celula *lista = NULL;

    lista = inserir(2, lista);
    lista = inserir(1, lista);
    lista = inserir(10, lista);
    lista = inserir(4, lista);

    exibir(lista);

    //cout << "A lista contem" << contar(lista) <<" elementos\n"
}