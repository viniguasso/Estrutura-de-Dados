#include <string>
#include <cstdlib>

using namespace std;

typedef struct no {
  int dado;
  struct no *prox;
} Celula;

void exibirLista(Celula *lista) {
  Celula *p;
  for (p = lista; p; p = p->prox) {
    cout << p->dado << endl;
  }
}

Celula *inserirLista(int valor, Celula *lista) {
  Celula *novo = (Celula*)malloc(sizeof(Celula));
  novo->dado = valor;
  novo->prox = NULL;
  if (!lista) return novo;
  Celula *p, *pR;
  for (pR = NULL, p = lista; p; pR = p, p = p->prox) {
    if (valor < p->dado) break;
  }
  if (p == lista) {
    novo->prox = lista;
    return novo;
  }
  if (!p) {
    pR->prox = novo;
  } 
  else {
    pR->prox = novo;
    novo->prox = p;
  }
  return lista;  
}

Celula *inserirListaControleDeDuplicados(int valor, Celula *lista) {
  Celula *novo = (Celula*)malloc(sizeof(Celula));
  novo->dado = valor;
  novo->prox = NULL;
  if (!lista) return novo;
  Celula *p, *pR;
  for (pR = NULL, p = lista; p; pR = p, p = p->prox) {
    if (valor < p->dado) break;

    if (valor == p->dado) return lista;
  }
  if (p == lista) {
    novo->prox = lista;
    return novo;
  }
  if (!p) {
    pR->prox = novo;
  } else {
    pR->prox = novo;
    novo->prox = p;
  }
  return lista;  
}

Celula *excluirOcorrenciasLista(int valor, Celula *lista) {
  Celula *p, *pR;
  int qtdExcluidos=0;
  if (!lista) {
    cout << "Lista vazia. Operação cancelada!" << endl;
    return lista;
  }
  bool houveExclusao;
  do {
    houveExclusao = false;
    for (pR = NULL, p = lista; p; pR = p, p = p->prox) {
      if (valor == p->dado) {
        //eh o primeiro
        if (p == lista) {
          lista = lista->prox;
        } else if (!p->prox) { //eh o ultimo
          pR->prox = NULL;
        } else { //esta entre celulas
          pR->prox = p->prox;
        }
        qtdExcluidos++;
        free(p);
        houveExclusao = true;
        break;
      }
    }   
  } while (houveExclusao);
  cout << "Foram excluidos = " << qtdExcluidos << " numeros" << endl;
  return lista;
}

void verificarPresenca(Celula *lista1, Celula* lista2) {
  if (!lista1 || !lista2) {
    cout << "Operação não realizada, pois ambas não existem ou uma delas também não existe!" << endl;
    return ;
  }
  Celula *p1, *p2;
  for (p1 = lista1; p1; p1 = p1->prox) {
    for (p2 = lista2; p2; p2 = p2->prox) {
      if (p1->dado == p2->dado) {
        cout << "Este dado ocorre nas 2 listas: " << p1->dado << endl;
      }
    }
  }
}

Celula* unirListas(Celula *lista1, Celula*lista2) {
  if (!lista1 || !lista2) {
    cout << "Operação não realizada, pois ambas não existem ou uma delas também não existe!" << endl;
    return NULL;
  }
  Celula *p;
  for (p = lista1; p->prox; p = p->prox)
  p->prox = lista2;
  return lista1;
}

Celula *excluirPares(Celula *lista) {
  Celula *p, *pR;
  if (!lista) {
    cout << "Lista vazia. Operação cancelada!" << endl;
    return lista;
  }
  bool houveExclusao;
  do {
    houveExclusao = false;
    for (pR = NULL, p = lista; p; pR = p, p = p->prox) {
      if (p->dado % 2 == 0) {
        //eh o primeiro
        if (p == lista) {
          lista = lista->prox;
        } else if (!p->prox) { //eh o ultimo
          pR->prox = NULL;
        } else { //esta entre celulas
          pR->prox = p->prox;
        }
        free(p);
        houveExclusao = true;
        break;
      }
    }   
  } while (houveExclusao);
  
  return lista;
}