#1 - Fazer um programa em C ou C++ que leia um arquivo texto com dados de glicemia (valor, data e hora). Esses dados estão um abaixo do outro separados por colunas.
Os dados lidos do arquivo devem ser inseridos em uma pilha (dados originais) e numa lista (dados ordenados).

#2 - Fazer um método que exiba os dados da pilha.

#3 - Fazer um método que exiba os dados da lista.

#4 - Fazer um método contarElementos da lista.

#5 - Fazer um método calcularMedia dos elementos da lista.

#6 - Fazer um método que retorne a mediana da lista. O valor da mediana, é o valor que está no meio da lista. Se a lista for de tamanho par, a mediana são os dois 
números do meio. Caso contrário, somente o número do meio.

#7 - Fazer um método que retorne o menor valor glicêmico da lista.

#8 - Fazer um método que retorne o maior valor glicêmico da lista.

#9 - Fazer um método que retorne os dois valores que mais repetem na lista (moda).


Sugestão de struct:
```c
typedef struct no {
  int valorGlicemia;
  char data[10];  //c++ string data;
  char hora[5];   //c++ string hora;
  struct no *prox;
}Celula;
```