/*QUEST�O12- Fa�a um algoritmo que receba o sal�rio de um funcion�rio, calcule e imprima o novo sal�rio
sabendo-se que este sofreu um aumento de 25%.*/

#include <stdio.h>
#include <math.h>//biblioteca que cont�m as fun��es b�sicas de matm�tica

int main(){
// variaveis
float salario;
float novo_salario;

//Entardas de dados
	printf("Digite o valor do salario: ");//usuario insere o valor do s�lario
    scanf("%f", &salario);//l� o valor
//processamento
	novo_salario = salario + (salario * 0.25);//o valor com o reajuste um multiplica��o do s�lario digitado pelo usu�rio vezes a porcentagem do enunciado
	
	printf("seu novo s�lario e : %f", novo_salario);//imprime o o valor do novo s�lario
	
	return 0;// 
	}
