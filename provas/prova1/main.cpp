#include <iostream>
#include <ctime>
#include "metodos.h"

using namespace std;

Celula *popular(Celula *lista, int n) {
  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    lista = inserirLista(rand() % 100, lista);
  }
  return lista;
}

Celula *popularControleDuplicados(Celula *lista, int n) {
  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    lista = inserirListaControleDeDuplicados(rand() % 100, lista);
  }
  return lista;
}

void escolherQuestao(Celula *lista1, Celula *lista2), listaSemRepetidos(Celula *lista2), excluirOcorrencia(Celula *lista1), numeros2Listas(Celula *lista1, Celula *lista2); 
void excluirPar(Celula *lista1), mediaPriUlt(Celula *lista1), exibirMetade(Celula *lista1);

int main() {
  Celula *lista1 = NULL;
  Celula *lista2 = NULL;
  lista1 = popular(lista1, 20);
  lista2 = popularControleDuplicados(lista2, 7);
  escolherQuestao(lista1, lista2);
}

void listaSemRepetidos(Celula *lista2) {
  cout << "Lista sem numeros repetidos" << endl;
  exibirLista(lista2);
}

void excluirOcorrencia(Celula *lista1) {
  int numero;
  cout << "Lista inicial" << endl;
  exibirLista(lista1);
  cout << "Qual o numero que voce deseja apagar da lista? ";
  cin >> numero;
  lista1 = excluirOcorrenciasLista(numero, lista1);
  cout << "Lista apos exclusao" << endl;
  exibirLista(lista1);
}

void numeros2Listas(Celula *lista1, Celula *lista2) {
  verificarPresenca(lista1, lista2);
}

Celula *unirLista(Celula *lista1, Celula *lista2) {
  Celula *lista3 = unirLista(lista2, lista1);
  cout << "Exibindo a uniao da lista2 com a lista1" << endl;
  exibirLista(lista3);
}

void excluirPar(Celula *lista1) {
  lista1 = excluirPares(lista1);
  cout << "Lista apos exclusao de pares" << endl;
  exibirLista(lista1);
}

void mediaPriUlt(Celula *lista1) {
}

void exibirMetade(Celula *lista1) {
}

void escolherQuestao(Celula *lista1, Celula *lista2) {
  int questao;
	cout << "\nEscolha a questao desejada:\n" << endl;
	cout << "(1) Lista Simples e encadeada sem numeros repetidos\n(2) excluirOcorrencias() e mostrar qtd de excluidos\n(3) Imprimir numeros que aparecem nas 2 listas\n(4) Unir 2 listas e retornar no lista" << endl;
	cout << "(5) Excluir Pares da lista\n(6) Media do primeiro e último valor da lista\n(7) Exibir metade da lista" << endl;
	cout << "\nQuestao desejada: ";
	cin >> questao;
	switch (questao) { 
		case 1: listaSemRepetidos(lista2);
			break;
		case 2: excluirOcorrencia(lista1);
			break;
		case 3: numeros2Listas(lista1, lista2);
			break;
		case 4: unirLista(lista1, lista2);
			break;
    case 5: excluirPar(lista1);
      break;
    case 6: mediaPriUlt(lista1);
      break;
    case 7: exibirMetade(lista1);
      break;
		default : printf("\n\nCaractere inválido!\n\n");
      escolherQuestao(lista1, lista2);
	}
}