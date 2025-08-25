/* QUESTÃO 1- Faça um algoritmo que receba dois números inteiros
e imprima a soma desses dois números.*/

#include <stdio.h>

int main(void){

int inteiro1;//valor da variavel será informada pelo usuário//
int inteiro2;//valor da variavel será informada pelo usuário//
int soma;//variavél de soma//

    printf("informe o seu primeiro valor: \n");//prompt//
    scanf("%d", &inteiro1);//lê  o numero colocado pelo usuário//
    printf("informe o seu segundo valor: \n");//prompt//
    scanf("%d", &inteiro2);// Lê o valor//

    soma = inteiro1+inteiro2;//atribui o processo da soma//

    printf("A soma e %2.d\n", soma);//print da soma//

    return 0; //indica que foi concluido com sucesso//
}
