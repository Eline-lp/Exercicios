/*QUESTÃO24-Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu
rendimento, ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses.
Sabendo-se que a fórmula usada para este cálculo é:
Valor acumulado = (P*(1 +i)n – 1)/i em que i = taxa, P = aplicação mensal e n = número de meses.*/

#include <stdio.h>
#include <math.h>

int main(){
	float v_acum, i, p, n;//variáveis
//entradas	
	printf("informe o valor da aplicacao mensal:\n");//entradas de dados
	scanf("%f", &p);//lê os dados
	printf("informe a taxa:\n");
	scanf("%f", &i);
	printf("informe o numero de meses:\n");
	scanf("%f", &n);
//processamento	
	v_acum = (p* (pow(1 + i, n)-1))/i;
//saída	
	printf(" o redimento sera:%2.f\n", v_acum);
	
	return 0;	
	
}
