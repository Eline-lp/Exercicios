/*QUESTÃO5-Faça um algoritmo que receba duas notas de um aluno e seus respectivos pesos, calcule e imprima a
média ponderada dessas notas.*/

#include <stdio.h>

//função
int main(){
	//variavéis será informada pelo usuário
	float nota1, nota2;
	float peso1, peso2;
	float mediap = 0;// variavel de média
	
	//Entrada de variavéis
		printf("Digite a primeira nota: \n");
		scanf("%f", &nota1);
		printf("Digite o peso: \n");
		scanf("%f", &peso1);
		
		printf("Digite  a segunda nota: \n");
		scanf("%f", &nota2);
		printf("Digite o peso: \n");
		scanf("%f", &peso2);
	//processamento
		mediap = (nota1*peso1 + nota2*peso2)/(peso1+peso2);//atribui total da média ponderada 
	//saída
		printf("a media e %f\n", mediap);//print média ponderada
		
		
		return 0;
	}

