/* Escrever um algoritmo para converter dollar em real e real em dollar, dada a cotação do dia. Dessa forma, o algoritmo deve solicitar ao usuário 
i) a cotação do dollar no dia;
ii) se o usuário quer converter dollar para real ou real para dollar
iii) exibir o resultado da conversão. Utilize funções. */

#include <stdio.h>

float solicitar_cot(), real_dolar(float cot), dolar_real(float cot);
int escolher_conv();

int main(){
  float cot = solicitar_cot();
	int conversao = escolher_conv();
	switch (conversao){ 
		case 1:{
			float resultado = real_dolar(cot);
			printf("\nConvertido para Dólares: USD $%.2f", resultado);
			break;
		} 	
		case 2:{
			float resultado = dolar_real(cot);
			printf("\nConvertido para Reais: R$%.2f", resultado);
			break;
		}
		default:{
			printf("\n\nCaractere inválido!\n\n");
			return	escolher_conv();
		}
	}
	return 0;
}
float solicitar_cot(){
  float cot;
  printf("\nDigite a cotação do Dólar de hoje: \nUSD $");
  scanf("%f", &cot);
  return cot;
}
int escolher_conv(){
	int conversao;
	printf("\nEscolha a conversão desejada:\n\n");
	printf("\t(1) Real -> Dólar\n\t(2) Dólar -> Real\n\nOpção: ");
	scanf("%d", &conversao);
	return conversao;
}
float real_dolar(float cot){
  float valor;
	printf("\nDigite o valor a ser convertido: \nR$");
	scanf("%f", &valor);
	return (valor / cot);
}
float dolar_real(float cot){
	float valor;
	printf("\nDigite o valor a ser convertido: \nUSD $");
	scanf("%f", &valor);
	return (valor * cot);
}