/*QUEST�O2- Fa�a um algoritmo que receba dois n�meros reais, calcule e imprima a subtra��o do primeiro n�mero
pelo segundo.*/

#include <stdio.h>
/*fun��o*/

int main(void){

float x;//valor da vari�vel ser� informada
float y;//valor da vari�vel ser� informada
float resultado = 0;//Variavel de sub

//Entrada de variavel

    printf("Digite o primeiro numero: ");/*prompt*/
    scanf("%f", &x); //l� a o valor
    printf("Digite O segundo numero: ");/*prompt*/
    scanf("%f", &y);//l� o valor

//processamento

    resultado = x-y;//atribui o total da sub

//sa�da

    printf("A diferenca e %2.f \n", resultado);//print sub

    return 0;//indica que o comando foi concluido com sucesso/
}
