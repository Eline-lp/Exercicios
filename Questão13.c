/*QUEST�O13-Sabe-se que o kilowatt de energia custa um quinto do sal�rio m�nimo. Fa�a um algoritmo que
receba o valor do sal�rio m�nimo e a quantidade de quilowatts gasta por uma resid�ncia. Calcule e
imprima:
� o valor, em reais, de cada kilowatt;
� o valor, em reais, a ser pago por essa resid�ncia;
� o novo valor a ser pago por essa resid�ncia, a partir de um desconto de 15%.*/

#include <stdio.h>
#include <math.h>//biblioteca que cont�m as fun��es b�sicas de matm�tica

int main(){
// variaveis
float salario;
float qtd_quilo;

//Entardas de dados
	printf("Digite o valor do salario: ");//usuario insere o valor do s�lario
    scanf("%f", &salario);//l� o valor
    printf("Digite a quantidade de quilowatts: ");//usuario insere o valor do s�lario
    scanf("%f", &qtd_quilo);//l� o valor
//processamento
	novo_salario = salario + (salario * 0.25);//o valor com o reajuste um multiplica��o do s�lario digitado pelo usu�rio vezes a porcentagem do enunciado
	
	printf("seu novo s�lario e : %f", novo_salario);//imprime o o valor do novo s�lario
	
	return 0;// 
	}
