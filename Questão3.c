/* QUEST�O3- Fa�a um algoritmo que receba dois n�meros inteiros, calcule e imprima a divis�o do primeiro n�mero
pelo segundo.*/

#include <stdio.h>

//fun��o
int main(){
	int x;//variavel ser� informada pelo usu�rio
	int y;
	int divisao = 0;// variavel de divis�o
	
	//Entrada de variav�is
		printf("Digite  o primeiro valor: \n");//usu�rio ir� inserir o valor
		scanf("%d", &x);//L� o valor
		printf("Digite  o primeiro valor: \n");
		scanf("%d", &y);
	//processamento
		divisao = x/y;//atribui total da divis�o
	//sa�da
		printf("O coeficiente e %d\n", divisao);//print divis�o
		
		
		return 0;
	}


