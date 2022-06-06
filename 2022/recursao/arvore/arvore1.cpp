#include <iostream>
#include <cstdlib>
#include "arvores.h"
using namespace std;

int main() {
  Arvore *raiz = NULL;

  raiz = inserir(15, raiz);
  raiz = inserir(100, raiz);
  raiz = inserir(15, raiz);
  raiz = inserir(50, raiz);
  raiz = inserir(15, raiz);
  raiz = inserir(15, raiz);
  raiz = inserir(24, raiz);

  exibir(raiz,0);

  cout << "A altura desta arvore e: " << calcularAltura(raiz) << endl;

  int numero = 500;
  cout << numero << " esta no nivel: " << localizarNivel(numero, raiz) << endl;
  cout << "Menor valor: " << menorElemento(raiz)->valor << endl;
  cout << "Maior valor: " << maiorElemento(raiz)->valor << endl;

  return 1;
}
