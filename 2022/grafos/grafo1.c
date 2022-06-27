#include <stdio.h>
#include <stdlib.h>
#include "grafo.h"

int main() {
	Grafo *grafo = NULL;
	Grafo *grafo1 = NULL;
	Grafo *grafo2 = NULL;

	// grafo = inicializarGrafo(5); //'construtor' do grafo

	// inserirGrafo(0,1,grafo);
	// inserirGrafo(0,4,grafo);
	// inserirGrafo(1,0,grafo);
	// inserirGrafo(1,2,grafo);
	// inserirGrafo(2,3,grafo);
	// inserirGrafo(3,0,grafo);
	// inserirGrafo(4,3,grafo);
	// exibirGrafo(grafo);

	// printf("\n");

	// grafo1 = inicializarGrafo(7); //'construtor' do grafo

	// inserirGrafoSimetrico(1,2,grafo1);
	// inserirGrafoSimetrico(1,5,grafo1);
	// inserirGrafoSimetrico(2,3,grafo1);
	// inserirGrafoSimetrico(2,5,grafo1);
	// inserirGrafoSimetrico(3,4,grafo1);
	// inserirGrafoSimetrico(4,5,grafo1);
	// inserirGrafoSimetrico(4,6,grafo1);

	// exibirGrafo(grafo1);


	grafo2 = inicializarGrafo(7);
	inserirGrafoSimetricoValorado(0,1,grafo2,7);
	inserirGrafoSimetricoValorado(0,3,grafo2,5);
	inserirGrafoSimetricoValorado(1,2,grafo2,8);
	inserirGrafoSimetricoValorado(1,3,grafo2,9);
	inserirGrafoSimetricoValorado(1,4,grafo2,7);
	inserirGrafoSimetricoValorado(2,4,grafo2,5);
	inserirGrafoSimetricoValorado(3,4,grafo2,15);
	inserirGrafoSimetricoValorado(3,5,grafo2,6);
	inserirGrafoSimetricoValorado(4,5,grafo2,8);
	inserirGrafoSimetricoValorado(4,6,grafo2,9);
	inserirGrafoSimetricoValorado(5,6,grafo2,11);
	exibirGrafo(grafo2);

	return 1;
}













