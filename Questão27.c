/*QUEST�O27- Ler uma temperatura em graus Celsius e apresent�-la convertida em graus Fahrenheit. A f�rmula de
convers�o �: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

int main() {
    float fh, c;//variaveis
    
    printf("Informe a temperatura em celsius: ");//entradas de dados
    scanf("%f", &c);//l� o dados

    fh =(9 * c + 160)/5;//processamento
    
    printf(" temperatura em Fahrenheit:%2.f ",fh);//sa�da
    
    return 0;
    
}

   
