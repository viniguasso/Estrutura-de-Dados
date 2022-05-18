1) fazer um método recursivo que receba um vetor de inteiros, seu tamanho e um valor de pesquisa. 
O método deve 1 se o valor encontra-se no vetor ou 0 se o valor não se encontra no vetor.

```c++
int buscarElementoR(int *vetor, int n, int pesquisa) {
    if (n > 0) {
        if (vetor[n - 1] == pesquisa) {
            return 1; //1 é localizado e já interrompemos o processo de empilhamento
        } else {
            return buscarElementoR(vetor, n - 1, pesquisa);
        }
    } else {
        return 0; //0 não localizado
    }
} 
```

2) fazer um método recursivo que receba um vetor de inteiros, seu tamanho e um valor de pesquisa. 
O método deve calcular e retornar quantos valores do vetor são múltiplos do valor passado no parâmetro.

```c++
int contarMultiplosR(int *vetor, int n, int pesquisa) {
    if (n > 0) {
        if (vetor[n - 1] % pesquisa == 0) {
            return 1 + contarMultiplosR(vetor, n - 1, pesquisa);
        } else {
            return 0 + contarMultiplosR(vetor, n - 1, pesquisa);
        }
    } else {
        return 0;
    }
}
```

3) estudar o método inserir recursivo em lista simples e fazer o excluir recursivo;

```c++
Celula *excluirR(int valor, Celula *lista) {
    if (lista) {
        if (valor == lista->valor) {
            //encontramos e vamos apagar
            Celula *lixo = lista;
            free(lista);
            return lixo->prox;
        } else {
            lista->prox = excluirR(valor, lista->prox); //teoria do joão e maria -> rastro
            return lista;
        }
    } else {
        return NULL; //ao se chegar aqui, é pq o valor não foi localizado
    }
}
```

4) implementar o método localizar recursivo. O método deve receber um valor inteiro e o
endereço da lista simples. Ao final, caso a valor exista na lista, retornar o endereço
do valor, ou NULL caso não exista;

```c++
Celula  *localizarElementoR(int valor, Celula *lista) {
    if (lista) {
        if (valor == lista->valor) {
            return lista;
        } else {
            return localizarElementoR(valor, lista->prox);
        }
    } else {
        return NULL; //valor não encontrado
    }
}
```

5) implementar o método localizarPosicaoLogica de forma recursiva. O método deve receber
um valor inteiro, o endereço da lista simples. Ao final, caso o valor exista na lista, 
retornar sua posição lógica (0 é a primeira posição, 1 é a segunda, assim por diante).
Caso o valor não esteja na lista, retornar -27;

```c++
int localizarPosicaoLogicaElementoR(int valor, Celula *lista) {
    if (lista) {
        if (valor == lista->valor) {
            return 0;
        } else {
            int respostaDeCima = localizarPosicaoLogicaElementoR(valor, lista->prox);
            if (respostaDeCima != -27) {
                return 1 + respostaDeCima;
            } else {
                return respostaDeCima;
            }            
        }
    } else {
        return -27; //valor não encontrado
    }
}
```

6) implementar um método recursivo que receba o endereço de uma lista simples e exiba
todos os valores pares contidos na lista;

```c++
void exibirParesR(Celula *lista) {
    if (lista) {
        if (lista->valor % 2 == 0) {
            printf("%d\n", lista->valor);
        }
        exibirParesR(lista->prox);
    }
}
```

7) implementar um método recursivo que receba uma lista simples e retorne o total de
elementos pares contidos na lista;

```c++
int contarParesR(Celula *lista) {
    if (lista) {
        if (lista->valor % 2 == 0) {
            return 1 + contarParesR(lista->prox);
        }
        return 0 + contarParesR(lista->prox);
    }
    return 0;
}
```