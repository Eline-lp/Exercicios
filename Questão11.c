/* QUEST�O11- Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e imprima o valor do imposto de
renda a ser pago, sabendo que o imposto equivale a 5% do sal�rio.*/

#include <stdio.h>
#include <math.h>//biblioteca que cont�m as fun��es b�sicas de matm�tica

int main(){
// variaveis
float salario;
float imposto;

//Entardas de dados
	printf("Digite o valor do salario: ");//usuario insere o valor do s�lario
    scanf("%f", &salario);//l� o valor
//processamento
	imposto = (salario * 0.05);//o valor a ser pago e um multiplica��o do s�lario digitado pelo usu�rio vezes a porcentagem do enunciado
	
	printf("o imposto a ser pago e : %f", imposto);//imprime o o valor a ser paga
	
	return 0;// 
	}
