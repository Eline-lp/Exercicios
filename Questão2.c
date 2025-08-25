/*QUESTÃO2- Faça um algoritmo que receba dois números reais, calcule e imprima a subtração do primeiro número
pelo segundo.*/

#include <stdio.h>
/*função*/

int main(void){

float x;//valor da variável será informada
float y;//valor da variável será informada
float resultado = 0;//Variavel de sub

//Entrada de variavel

    printf("Digite o primeiro numero: ");/*prompt*/
    scanf("%f", &x); //lê a o valor
    printf("Digite O segundo numero: ");/*prompt*/
    scanf("%f", &y);//lê o valor

//processamento

    resultado = x-y;//atribui o total da sub

//saída

    printf("A diferenca e %2.f \n", resultado);//print sub

    return 0;//indica que o comando foi concluido com sucesso/
}
