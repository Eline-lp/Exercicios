/*QUESTÃO25-Faça um algoritmo que após a entrada de uma determinada distância entre dois pontos (em KM) e
uma determinada velocidade (km/h), diga qual o tempo médio que levará para chegada a esse local e
qual a velocidade em metros/segundo.*/

#include <stdio.h>

int main() {
    float distancia, velocidade, tempo;//VARIAVEIS

    printf("Informe a distancia: ");//entradas de dados
    scanf("%f", &distancia);//lê o dados

    printf("Informe a velocidade: ");
    scanf("%f", &velocidade);
    
    tempo = distancia/velocidade;//processamento
    
    printf("o tempo entre dois pontos e : %2.f h ", tempo);//saída
    
    
    return 0;
}
