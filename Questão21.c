/*QUEST�O21-Entrar via teclado com o valor de cinco produtos. Ap�s as entradas, digitar um valor referente ao
pagamento da somat�ria destes valores. Calcular e exibir o troco que dever� ser devolvido. */

#include <stdio.h>
#include <math.h>

//Fun��o
int main(){
	float v1, v2, v3, v4, v5;//variaveis
	float soma, pagamento, troco;
//entradas usu�rio insere os valores de seus produtos
	printf("informe o valor dos produtos 1, 2, 3, 4, 5:\n ");
	scanf("%f %f %f %f %f", &v1, &v2, &v3, &v4, &v5);
//soma dos valores
	soma = (v1 + v2 + v3 + v4+ v5);
//infomra o valor do pagemento em reias	
	printf("informe  o valor pago pelo cliente: \n");
	scanf("%f", &pagamento);
//calcula o valor o troco que o cliente deve receber	
	troco = pagamento - soma;
//sa�da, mostra o total da compra, o valor de pagamento e troco que o cliente ir� receber	
	printf(" total da compra : R$ %2.f \n", soma);
	printf(" pagamento: R$ %2.f\n", pagamento);
	printf(" total do troco e %2.f\n", troco);
	
	
	return 0;
}
