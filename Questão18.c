/*QUEST�O18 -Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a �rea total
existente.*/

#include <stdio.h>
#include <math.h>
//Fun��o
int main(){
	float largura, comprimento;//variaveis
	float areatotal;
//entradas
	printf("informe a largura: ");
	scanf("%f", &largura);//l� o valor que o usu�rio inseriu
	printf("informe o comprimento: ");
	scanf("%f", &comprimento);
//processamento	
	areatotal = largura * comprimento;
//sa�da	
	printf(" a largura total existente e %2.f \n", areatotal);
	
	return 0;
	
}
