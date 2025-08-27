#include <stdio.h>
#include <math.h>

int main(){
	
	float salario_minimo;
	float qtdkw;
	float valor_total;
	float valorporkw;
	float valor_com_desconto;
	
	printf(" Digite o valor do salário: ");
	scanf("%f", &salario_minimo);
	
	printf(" Digite a quantidade de kilowatt: ");
	scanf("%f", &qtdkw);
	
	valorporkw = salario_minimo/5.0;
	valor_total =valorporkw*qtdkw;
	valor_com_desconto = valor_total*0.85;
	
	printf(" valor de cada kwh: R$ %f\n", valorporkw);
	printf(" valor a ser pago sem desconto kwh: R$ %f\n", valor_total);
	printf(" valor com desconto a ser pago kwh: R$ %f\n", valor_com_desconto);
	
	
	return 0;
	
}
