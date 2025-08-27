/*QUEST�O-14- Fa�a um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
� o peso dessa pessoa em gramas;
� se essa pessoa engordar 5%, qual ser� seu novo peso em gramas.*/


#include <stdio.h>
#include <math.h>

int main() {
    float pesoKg;                // Vari�vel para armazenar o peso em quilos
    float pesoGramas;          // Peso convertido para gramas
    float novoPesoGramas;      // Peso com aumento de 5%

    // Solicita o peso da pessoa
    printf("Digite o peso da pessoa em kg: ");
    scanf("%f", &pesoKg);  // L� o valor digitado pelo usu�rio

    // Converte o peso para gramas
    pesoGramas = pesoKg * 1000;

    // Calcula o novo peso com 5% a mais
    novoPesoGramas = pesoGramas * 1.05;

    // Exibe os resultados
    printf("Peso em gramas: %.2f g\n", pesoGramas);
    printf("Peso com 5%% de aumento: %.2f g\n", novoPesoGramas);

    return 0;
}
