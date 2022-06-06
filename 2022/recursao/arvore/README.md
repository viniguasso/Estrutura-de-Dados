# Percorrer árvore
```c++
void exibir RED(Arvore *raiz) {
	if(raiz) {
		cout << raíz->dado << endl; //R
		exibirRED(raiz->esq);       //E
		exibirRED(raiz->dir);       //D
	}
}
void exibir ERD(Arvore *raiz) {
	if(raiz) {
		exibirERD(raiz->esq);       //E
		cout << raíz->dado << endl; //R
		exibirRED(raiz->dir);       //D
	}
}
void exibir EDR(Arvore *raiz) {
	if(raiz) {
		exibirRED(raiz->esq);       //E
		exibirRED(raiz->dir);       //D
		cout << raíz->dado << endl; //R
	}
} 
```
# Altura
```c++
int altura(Arvore *r) {
	if (r) {
		int altEsq = altura(r->esq); //E
		int altDir = altura(r->dir); //D
		if (altEsq>altDir) {         //R
			return 1 + altEsq;
		} else {
			return 1 + altDir;
		}
	}
	return 0;
}
```
# Localizar
```c++
Arvore *localizar(int valor, Arvore *r){
	if (r) {
		if (valor == r->dado) {
			return r;
		}
		if (valor < r->dado) {
			return localizar(valor, r->esq);
		} else {
			return localizar(valor, r->dir);
		}
	}
	return NULL;
}
```
# Localizar Nível
```c++
int localizarNivel(int valor, Arvore *r) {
	if (r) {
		if (valor == r->dado) return 0;
		if (valor < r->dado) {
			int resultado = localizarNivel(valor, r->esq);
			if (resultado == -1) return -1;
			return 1 + resultado;
		} else {
			int resultado = localizarNivel(valor, r->dir);
			if (resultado == -1) return -1;
			return 1 + resultado;
		}
	}
	return -1;
}
```
# Contar Folhas
```c++
int contarFolhas(Arvore *r) {
	if (r) {
		if (!r->esq && !r->dir) {
			return 1;
		}
		return 0  + contarFolhas(r->esq) + contarFolhas(r->dir);
	}
}
```
# Contar NãoFolhas
```c++
int contarNaoFolhas(Arvore *r) {
	if (r) {
		if (r->esq || r->dir) {
			return 1  + contarNaoFolhas(r->esq) + contarNaoFolhas(r->dir)
		}
	}
	return 0;
}
```