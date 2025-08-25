/*QUESTÃO9-Faça um algoritmo que receba o valor do salário de um funcionário e o valor do salário mínimo. Calcule e
imprima quantos salários mínimos ganha esse funcionário.*/

#include <stdio.h>
#include <math.h>

int main(){

float sal_func;//valor da variavel será informada pelo usuário//
float salarioM;//valor da variavel será informada pelo usuário//
float qntd;//variavél da reservada para receber a quantidade//

    printf("informe seu salario: \n");//prompt//
    scanf("%f", &sal_func);//lê  o numero colocado pelo usuário//
    printf("informe o valor do salario minimo: \n");//prompt//
    scanf("%f", &salarioM);// Lê o valor//

    qntd = sal_func/salarioM;//atribui da divisão//

    printf("A quantidade de salario e %2.f\n", qntd);//print da quantidade de salários//

    return 0; //indica que foi concluido com sucesso//
}
