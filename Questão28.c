/*A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco) presta��es sem juros. Fa�a
um algoritmo que receba um valor de uma compra e mostre o valor das presta��es*/

#include <stdio.h>

int main() {
	    float p1, p2, p3;//variaveis
	    float total, p;
	    
	    printf("o valor dos produtos dos tres produtos:\n ");//entradas de dados
	    scanf("%f %f %f", &p1, &p2, &p3);//l� o dados
	    
	    
	    total = (p1+p2+p3);
	    p = total/5;
	    
	    printf(" total da compra e: %2.f\n ",total);
	    printf(" valor da prestacao: %2.f\n ",p);
	    
	    
	    return 0;    
	    
	    
}
