/*QUEST�O5-Fa�a um algoritmo que receba duas notas de um aluno e seus respectivos pesos, calcule e imprima a
m�dia ponderada dessas notas.*/

#include <stdio.h>

//fun��o
int main(){
	//variav�is ser� informada pelo usu�rio
	float nota1, nota2;
	float peso1, peso2;
	float mediap = 0;// variavel de m�dia
	
	//Entrada de variav�is
		printf("Digite a primeira nota: \n");
		scanf("%f", &nota1);
		printf("Digite o peso: \n");
		scanf("%f", &peso1);
		
		printf("Digite  a segunda nota: \n");
		scanf("%f", &nota2);
		printf("Digite o peso: \n");
		scanf("%f", &peso2);
	//processamento
		mediap = (nota1*peso1 + nota2*peso2)/(peso1+peso2);//atribui total da m�dia ponderada 
	//sa�da
		printf("a media e %f\n", mediap);//print m�dia ponderada
		
		
		return 0;
	}

