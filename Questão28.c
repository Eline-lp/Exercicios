/*A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça
um algoritmo que receba um valor de uma compra e mostre o valor das prestações*/

#include <stdio.h>

int main() {
	    float p1, p2, p3;//variaveis
	    float total, p;
	    
	    printf("o valor dos produtos dos tres produtos:\n ");//entradas de dados
	    scanf("%f %f %f", &p1, &p2, &p3);//lê o dados
	    
	    
	    total = (p1+p2+p3);
	    p = total/5;
	    
	    printf(" total da compra e: %2.f\n ",total);
	    printf(" valor da prestacao: %2.f\n ",p);
	    
	    
	    return 0;    
	    
	    
}
