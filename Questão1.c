/* QUEST�O 1- Fa�a um algoritmo que receba dois n�meros inteiros
e imprima a soma desses dois n�meros.*/

#include <stdio.h>

int main(void){

int inteiro1;//valor da variavel ser� informada pelo usu�rio//
int inteiro2;//valor da variavel ser� informada pelo usu�rio//
int soma;//variav�l de soma//

    printf("informe o seu primeiro valor: \n");//prompt//
    scanf("%d", &inteiro1);//l�  o numero colocado pelo usu�rio//
    printf("informe o seu segundo valor: \n");//prompt//
    scanf("%d", &inteiro2);// L� o valor//

    soma = inteiro1+inteiro2;//atribui o processo da soma//

    printf("A soma e %2.d\n", soma);//print da soma//

    return 0; //indica que foi concluido com sucesso//
}
