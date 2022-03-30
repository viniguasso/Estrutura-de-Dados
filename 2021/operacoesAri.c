// Escrever um programa que leia dois números e a seguir realize as operações aritméticas básicas (+, -, *, /) sobre estes números. Cada uma das operações deve ser implementada em uma função diferente. Use protótipos.
#include <stdio.h>

void solicitar_val(), escolher_mostrarop(), soma(), div(), sub(), mul();
float num1, num2;
float subtração, divisão;
char operacao;

int main() {
	solicitar_val();
	escolher_mostrarop();
	return 0;
}

void solicitar_val() {
    printf("Digite o primeiro número inteiro: ");
    scanf("%f", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%f", &num2);
}
void escolher_mostrarop() {
	printf("\nEscolha a operação desejada:\n\n");
	printf("\t(s)oma\n\t(m)ultiplicação\n\tS(u)btração\n\t(d)ivisão\n");
	printf("\nOpção: ");
	scanf(" %c", &operacao);
	switch (operacao) { 
		case 's': soma();
			break;
		case 'm': mul();
			break;
		case 'u': sub();
			break;
		case 'd': div();
			break;
		default : printf("\n\nCaractere inválido!\n\n");
			return	escolher_mostrarop();	
	}
}
void soma() {
	printf("\nSoma: %.f", num1+num2);
}
void div() {
	printf("\nDivisão: %.f", num1/num2);
}
void sub() {
	printf("\nSubtração: %.f", num1-num2);
}
void mul() {
	printf("\nMultiplicação: %.f", num1*num2);
}