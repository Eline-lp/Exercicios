/*QUESTÃO8 - Faça um programa que receba um número inteiro, calcule e imprima:
• a raiz quadrada desse número;
• esse número elevado ao quadrado.*/

#include <stdio.h>
#include <math.h>//biblioteca math contem funções de matemática

int main(){
	
// variavéis
int n1;
float resultado;

//entrada de valores
    printf("informe o numero para ser calculado sua raiz \n");//prompt//
    scanf("%d", &n1);//lê  o numero colocado pelo usuário//
    
//processamento
    resultado = sqrt(n1);//sqrt é a função que retorna a raiz quadrada do meu valor
//Saída
    printf("a raiz quadrada  e %2.f\n", resultado);//print daminha raiz

    return 0; //indica que foi concluido com sucesso//
}
