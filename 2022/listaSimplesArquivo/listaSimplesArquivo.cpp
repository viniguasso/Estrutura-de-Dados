#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <sstream>

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

Celula *popularDoArquivo(Celula *lista) {
    //ifstream -> input ou ler
    //ofstream -> output ou escrever

    ifstream procurador;
    char nomeArquivo[200];

    cout << "Informe caminho e nome do arquivo fonte com numeros: ";
    cin >> nomeArquivo;

    procurador.open(nomeArquivo);

    if (!procurador) {
        cout << "Arquivo não localizado\n";
        exit(0);
    }
    string linha;
    int valor;
    while (getline(procurador, linha)) {
        stringstream pegaInteiro(linha);
        pegaInteiro >> valor;
        lista = inserir(valor, lista); //inserção ordenada
    }
    procurador.close();
    return lista;
}

int main () {
    Celula *lista = NULL;

    lista = popularDoArquivo(lista);

    exibir(lista);

    //cout << "A lista contem" << contar(lista) <<" elementos\n"
}