/*QUESTÃO6-Faça um algoritmo que receba um número inteiro, calcule e imprima a tabuada de multiplicação desse
número.*/

#include <stdio.h>//biblioteca de entrada e saida
//função
int main(){

int numero;//valor da variavel será informada pelo usuário//
int i;//laço para repetir

    printf("informe um numero que deseja como tabuada: \n");//prompt//
    scanf("%d", &numero);//lê  o numero colocado pelo usuário//

    
    	for(i=1; i<=10; i++){//laço de repetição inicia do 1 e vai até 10, conforme a tabuada

	
	printf("%d x %d = %d\n", numero, i, numero*i);//irá aparecer na tela o valor do usuario e o numero inicializado 1 que colocamos no laço, ate o numero 10
	}
    return 0; //indica que foi concluido com sucesso//
}
