/*QUEST�O25-Fa�a um algoritmo que ap�s a entrada de uma determinada dist�ncia entre dois pontos (em KM) e
uma determinada velocidade (km/h), diga qual o tempo m�dio que levar� para chegada a esse local e
qual a velocidade em metros/segundo.*/

#include <stdio.h>

int main() {
    float distancia, velocidade, tempo;//VARIAVEIS

    printf("Informe a distancia: ");//entradas de dados
    scanf("%f", &distancia);//l� o dados

    printf("Informe a velocidade: ");
    scanf("%f", &velocidade);
    
    tempo = distancia/velocidade;//processamento
    
    printf("o tempo entre dois pontos e : %2.f h ", tempo);//sa�da
    
    
    return 0;
}
