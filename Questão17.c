/*QUEST�O17-Fa�a um programa que receba a quantidade e o valor de tr�s produtos, no seguinte formato:
quantidade1 valor1 quantidade2 valor2 quantidade3 valor3. O programa deve calcular esses valores
seguindo a f�rmula total = quantidade1* valor1 + quantidade2 * valor2 + quantidade3 * valor3. O valor
total deve ser apresentado no final da execu��o do programa.**/

#include <stdio.h>
#include <math.h>

//variaveis
	int main(){
		int qtd1, qtd2, qtd3;
		float valor1, valor2, valor3, resultado;
//usu�rio vai colocar os valores		
		printf("informe as quantidade 1 , 2, 3: \n");
		scanf("%d %d %d", &qtd1, &qtd2, &qtd3);
		printf("informe os valores 1 , 2, 3:\n");
		scanf("%f %f %f", &valor1, &valor2, &valor3);
//processamento		
		resultado = (qtd1 * valor1 +qtd2 * valor2 * qtd3 * valor3);
//sa�da		
		printf("Valor total da compra: R$ %.2f\n", resultado);
		
		
		return 0;
	}

