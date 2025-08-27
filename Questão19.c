/*QUESTÃO19- Crie um programa que receba valores quaisquer e mostre a média entre eles, o somatório entre eles
e o resto da divisão do somatório por cada um dos valores.*/

#include <stdio.h>
#include <math.h>
//Função
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
//saídas de dados	
	printf(" a soma e: %.2f\n", soma);
    printf("a media e: %.2f\n", media);
    
// está faltando exibir a divisão do somatório
    return 0;
}
