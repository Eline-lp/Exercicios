/*QUEST�O24-Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada. Para calcular seu
rendimento, ela dever� fornecer o valor constante da aplica��o mensal, a taxa e o n�mero de meses.
Sabendo-se que a f�rmula usada para este c�lculo �:
Valor acumulado = (P*(1 +i)n � 1)/i em que i = taxa, P = aplica��o mensal e n = n�mero de meses.*/

#include <stdio.h>
#include <math.h>

int main(){
	float v_acum, i, p, n;//vari�veis
//entradas	
	printf("informe o valor da aplicacao mensal:\n");//entradas de dados
	scanf("%f", &p);//l� os dados
	printf("informe a taxa:\n");
	scanf("%f", &i);
	printf("informe o numero de meses:\n");
	scanf("%f", &n);
//processamento	
	v_acum = (p* (pow(1 + i, n)-1))/i;
//sa�da	
	printf(" o redimento sera:%2.f\n", v_acum);
	
	return 0;	
	
}
