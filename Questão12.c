/*QUESTÃO12- Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário
sabendo-se que este sofreu um aumento de 25%.*/

#include <stdio.h>
#include <math.h>//biblioteca que contêm as funções básicas de matmática

int main(){
// variaveis
float salario;
float novo_salario;

//Entardas de dados
	printf("Digite o valor do salario: ");//usuario insere o valor do sálario
    scanf("%f", &salario);//lê o valor
//processamento
	novo_salario = salario + (salario * 0.25);//o valor com o reajuste um multiplicação do sálario digitado pelo usuário vezes a porcentagem do enunciado
	
	printf("seu novo sálario e : %f", novo_salario);//imprime o o valor do novo sálario
	
	return 0;// 
	}
