/*QUESTÃO18 -Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a área total
existente.*/

#include <stdio.h>
#include <math.h>
//Função
int main(){
	float largura, comprimento;//variaveis
	float areatotal;
//entradas
	printf("informe a largura: ");
	scanf("%f", &largura);//lê o valor que o usuário inseriu
	printf("informe o comprimento: ");
	scanf("%f", &comprimento);
//processamento	
	areatotal = largura * comprimento;
//saída	
	printf(" a largura total existente e %2.f \n", areatotal);
	
	return 0;
	
}
