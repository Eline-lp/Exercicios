/*QUEST�O22- Escreva um algoritmo para trocar os valores de tr�s vari�veis A, B e C de modo que A fique com o
valor de B, B fique com o valor de C e C fique com o valor de A.*/
#include <stdio.h>
#include <math.h>

//Fun��o
int main(){
	float letraA, letraB, letraC, troca;//variaveis
	
//entradas usu�rio insere os valores de seus p
	printf("informe os valores de A, B, C:\n ");
	scanf("%f %f %f", &letraA, &letraB, &letraC);
//processamneto momento onde ous valore que foram incluidos ser�o trocados	
	troca = letraA;
	letraA = letraB;
	letraB = letraC;
	letraC = troca;
//sa�das	
    printf("letraA = %2.f\n", letraA);
    printf("letraB = %2.f\n", letraB);
    printf("letraC = %2.f\n", letraC);

	
	
	return 0;
}
