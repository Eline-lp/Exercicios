/*QUESTÃO21-Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor referente ao
pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido. */

#include <stdio.h>
#include <math.h>

//Função
int main(){
	float v1, v2, v3, v4, v5;//variaveis
	float soma, pagamento, troco;
//entradas usuário insere os valores de seus produtos
	printf("informe o valor dos produtos 1, 2, 3, 4, 5:\n ");
	scanf("%f %f %f %f %f", &v1, &v2, &v3, &v4, &v5);
//soma dos valores
	soma = (v1 + v2 + v3 + v4+ v5);
//infomra o valor do pagemento em reias	
	printf("informe  o valor pago pelo cliente: \n");
	scanf("%f", &pagamento);
//calcula o valor o troco que o cliente deve receber	
	troco = pagamento - soma;
//saída, mostra o total da compra, o valor de pagamento e troco que o cliente irá receber	
	printf(" total da compra : R$ %2.f \n", soma);
	printf(" pagamento: R$ %2.f\n", pagamento);
	printf(" total do troco e %2.f\n", troco);
	
	
	return 0;
}
