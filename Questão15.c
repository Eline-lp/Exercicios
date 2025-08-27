/*QUESTÃO15- Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e
imprima:
• a idade dessa pessoa;
• essa idade convertida em semanas.*/

#include <stdio.h>

int main() {
	//entrada das variavéis
    int anoNasc, anoAtual;
    int idade, idadeSemana;

    // Solicita o ano de nascimento
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNasc);

    // Solicita o ano atual
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    //processamento
    idade = anoAtual - anoNasc;
    idadeSemana = idade * 52; //ano tem aproximadamneto 52 semanas

    // Exibe os resultados
    printf("Idade: %d anos\n", idade);
    printf("Idade em semanas: %d semanas\n", idadeSemana);

    return 0;
}
