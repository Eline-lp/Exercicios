/* QUESTÃO3- Faça um algoritmo que receba dois números inteiros, calcule e imprima a divisão do primeiro número
pelo segundo.*/

#include <stdio.h>

//função
int main(){
	int x;//variavel será informada pelo usuário
	int y;
	int divisao = 0;// variavel de divisão
	
	//Entrada de variavéis
		printf("Digite  o primeiro valor: \n");//usuário irá inserir o valor
		scanf("%d", &x);//Lê o valor
		printf("Digite  o primeiro valor: \n");
		scanf("%d", &y);
	//processamento
		divisao = x/y;//atribui total da divisão
	//saída
		printf("O coeficiente e %d\n", divisao);//print divisão
		
		
		return 0;
	}


