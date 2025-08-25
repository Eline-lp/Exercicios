/*QUESTÃO13-Sabe-se que o kilowatt de energia custa um quinto do salário mínimo. Faça um algoritmo que
receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. Calcule e
imprima:
• o valor, em reais, de cada kilowatt;
• o valor, em reais, a ser pago por essa residência;
• o novo valor a ser pago por essa residência, a partir de um desconto de 15%.*/

#include <stdio.h>
#include <math.h>//biblioteca que contêm as funções básicas de matmática

int main(){
// variaveis
float salario;
float qtd_quilo;

//Entardas de dados
	printf("Digite o valor do salario: ");//usuario insere o valor do sálario
    scanf("%f", &salario);//lê o valor
    printf("Digite a quantidade de quilowatts: ");//usuario insere o valor do sálario
    scanf("%f", &qtd_quilo);//lê o valor
//processamento
	novo_salario = salario + (salario * 0.25);//o valor com o reajuste um multiplicação do sálario digitado pelo usuário vezes a porcentagem do enunciado
	
	printf("seu novo sálario e : %f", novo_salario);//imprime o o valor do novo sálario
	
	return 0;// 
	}
