/*QUEST�O8 - Fa�a um programa que receba um n�mero inteiro, calcule e imprima:
� a raiz quadrada desse n�mero;
� esse n�mero elevado ao quadrado.*/

#include <stdio.h>
#include <math.h>//biblioteca math contem fun��es de matem�tica

int main(){
	
// variav�is
int n1;
float resultado;

//entrada de valores
    printf("informe o numero para ser calculado sua raiz \n");//prompt//
    scanf("%d", &n1);//l�  o numero colocado pelo usu�rio//
    
//processamento
    resultado = sqrt(n1);//sqrt � a fun��o que retorna a raiz quadrada do meu valor
//Sa�da
    printf("a raiz quadrada  e %2.f\n", resultado);//print daminha raiz

    return 0; //indica que foi concluido com sucesso//
}
