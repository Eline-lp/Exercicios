/*QUEST�O19- Crie um programa que receba valores quaisquer e mostre a m�dia entre eles, o somat�rio entre eles
e o resto da divis�o do somat�rio por cada um dos valores.*/

#include <stdio.h>
#include <math.h>
//Fun��o
int main(){
	float valor1, valor2;//variaveis
	float soma;
	float media, div;
//entradas de dados	
	printf("informe o seu primeiro valor e depois o segundo:\n");
	scanf("%f %f", &valor1, &valor2);
//processamento	
	soma  = (valor1 + valor2);
	media = soma/2;
//sa�das de dados	
	printf(" a soma e: %.2f\n", soma);
    printf("a media e: %.2f\n", media);
    
// est� faltando exibir a divis�o do somat�rio
    return 0;
}
