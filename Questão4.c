/*QUEST�O4-Fa�a um algoritmo que receba tr�s notas de um aluno, calcule e imprima a m�dia aritm�tica entre essas
notas.*/

#include <stdio.h>

//fun��o
int main(){
	//variav�is ser� informada pelo usu�rio
	float nota1;
	float nota2;
	float nota3;
	float media = 0;// variavel de m�dia
	
	//Entrada de variav�is
		printf("Digite a primeira nota: \n");
		scanf("%f", &nota1);
		printf("Digite  a segunda nota: \n");
		scanf("%f", &nota2);
		printf("Digite a terceira nota: \n");
		scanf("%f", &nota3);
	//processamento
		media = (nota1 + nota2 + nota3)/3;//atribui total da m�dia
	//sa�da
		printf("a media e %2.f\n", media);//print m�dia
		
		
		return 0;
	}
