/*QUESTÃO4-Faça um algoritmo que receba três notas de um aluno, calcule e imprima a média aritmética entre essas
notas.*/

#include <stdio.h>

//função
int main(){
	//variavéis será informada pelo usuário
	float nota1;
	float nota2;
	float nota3;
	float media = 0;// variavel de média
	
	//Entrada de variavéis
		printf("Digite a primeira nota: \n");
		scanf("%f", &nota1);
		printf("Digite  a segunda nota: \n");
		scanf("%f", &nota2);
		printf("Digite a terceira nota: \n");
		scanf("%f", &nota3);
	//processamento
		media = (nota1 + nota2 + nota3)/3;//atribui total da média
	//saída
		printf("a media e %2.f\n", media);//print média
		
		
		return 0;
	}
