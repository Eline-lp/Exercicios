/*QUEST�O9-Fa�a um algoritmo que receba o valor do sal�rio de um funcion�rio e o valor do sal�rio m�nimo. Calcule e
imprima quantos sal�rios m�nimos ganha esse funcion�rio.*/

#include <stdio.h>
#include <math.h>

int main(){

float sal_func;//valor da variavel ser� informada pelo usu�rio//
float salarioM;//valor da variavel ser� informada pelo usu�rio//
float qntd;//variav�l da reservada para receber a quantidade//

    printf("informe seu salario: \n");//prompt//
    scanf("%f", &sal_func);//l�  o numero colocado pelo usu�rio//
    printf("informe o valor do salario minimo: \n");//prompt//
    scanf("%f", &salarioM);// L� o valor//

    qntd = sal_func/salarioM;//atribui da divis�o//

    printf("A quantidade de salario e %2.f\n", qntd);//print da quantidade de sal�rios//

    return 0; //indica que foi concluido com sucesso//
}
