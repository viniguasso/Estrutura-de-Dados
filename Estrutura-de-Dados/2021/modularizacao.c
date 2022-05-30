// 1) criar um algoritmo para cadastrar o nome e a idade dos funcionários de uma empresa. A quantidade a ser cadastrada é informada pelo usuário do sistema. Ao final do algoritmo, exiba na tela do computador todos os funcionários cadastrados. Utilize funções e estrutura.
#include <stdio.h>
#include <stdio.h>

void coletar_quantidade(), coletar_infos(), exibir_infos();
int i, num_funcionarios;

struct ficha {
    char nome[20];
    int idade;
}   funcionario[0];

int main() {
	coletar_quantidade();
	coletar_infos();
	exibir_infos();
}

void coletar_quantidade() {
	printf("Quantidade de funcionários: ");
	scanf("%d", &num_funcionarios);
}

void coletar_infos() {
	for (i=0; i<num_funcionarios; i++) {
        printf("\nDigite o nome do %dº funcionário: ", (i+1));
        scanf("%s",  (funcionario[i].nome));
        printf("Digite a idade: ");
        scanf("%d", &(funcionario[i].idade));
	}
	printf("\e[H\e[2J");
}

void exibir_infos() {
	for (i=0; i<num_funcionarios; i++) {
   	    printf("\n\n%dº funcionário: %s", (i+1), funcionario[i].nome);
  	    printf("\nIdade: %d", funcionario[i].idade);
    } 
}