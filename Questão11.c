/* QUESTÃO11- Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o valor do imposto de
renda a ser pago, sabendo que o imposto equivale a 5% do salário.*/

#include <stdio.h>
#include <math.h>//biblioteca que contêm as funções básicas de matmática

int main(){
// variaveis
float salario;
float imposto;

//Entardas de dados
	printf("Digite o valor do salario: ");//usuario insere o valor do sálario
    scanf("%f", &salario);//lê o valor
//processamento
	imposto = (salario * 0.05);//o valor a ser pago e um multiplicação do sálario digitado pelo usuário vezes a porcentagem do enunciado
	
	printf("o imposto a ser pago e : %f", imposto);//imprime o o valor a ser paga
	
	return 0;// 
	}
