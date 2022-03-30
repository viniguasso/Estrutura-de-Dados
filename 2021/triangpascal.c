#include <stdio.h>
#include <stdlib.h>

void preencher(int valor, int **T), imprimir(int valor, int **T);

int main() {
  int valor, i, n, **T;
  printf("Digite o valor: ");
  scanf("%d", &valor);
  T = (int**) malloc(valor*sizeof(int*));
  for (i = 0; i < valor; i++) {
    T[i] = (int*) malloc((i+1)*sizeof(int));
  }
  if (valor <= 0) {
    return(1);
  }
  preencher(valor,T);
  imprimir(valor,T);
  return(0);
}
void preencher(int valor, int **T) {
  int i, n;
  T[0][0] = 1;
  for (i = 1; i < valor; i++) {
    T[i][0] = 1;
    T[i][i] = 1;
    for (n = 1; n < i; n++) {
      T[i][n] = T[i-1][n] + T[i-1][n-1];
    }
  }
  return;
}
void imprimir(int valor, int**T) {
  int i, n;
  for (i = 0; i < valor; i++) {
    for (n = 0; n <= i; n++) {
      printf("%5d", T[i][n]);
    }
    printf("\n");
  }
  return;
}