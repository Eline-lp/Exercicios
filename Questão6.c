/*QUEST�O6-Fa�a um algoritmo que receba um n�mero inteiro, calcule e imprima a tabuada de multiplica��o desse
n�mero.*/

#include <stdio.h>//biblioteca de entrada e saida
//fun��o
int main(){

int numero;//valor da variavel ser� informada pelo usu�rio//
int i;//la�o para repetir

    printf("informe um numero que deseja como tabuada: \n");//prompt//
    scanf("%d", &numero);//l�  o numero colocado pelo usu�rio//

    
    	for(i=1; i<=10; i++){//la�o de repeti��o inicia do 1 e vai at� 10, conforme a tabuada

	
	printf("%d x %d = %d\n", numero, i, numero*i);//ir� aparecer na tela o valor do usuario e o numero inicializado 1 que colocamos no la�o, ate o numero 10
	}
    return 0; //indica que foi concluido com sucesso//
}
