/*QUESTÃO20- Uma determinada pessoa que trabalha com construção de piscinas precisa de um programa que
calcule o valor das construções solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
o comprimento, a largura e a profundidade da piscina a ser construída. Leve em consideração que o
valor da construção é cobrado por m3 de água que a piscina conterá e o preço é de R$ 45.00 por m3*/

#include <stdio.h>
#include <math.h>

//Função
int main(){
	float largura, comprimento, profundidade;//variaveis
	float volume, preco;
//entradas
	printf("informe a largura: ");
	scanf("%f", &largura);//lê o valor que o usuário inseriu
	printf("informe o comprimento: ");
	scanf("%f", &comprimento);
	printf("informe a profundidade da piscina: ");
    scanf("%f", &profundidade);
//processamento	para achar o volume multiplico os três
	volume = comprimento * largura *profundidade;
	preco =volume * 45.0;// preço total pleo valor do que foi dado na questão
//saída	
	printf("\nVolume da piscina: %.2f m³\n", volume);
    printf("Preço da construção: R$ %.2f\n", preco);
    
	return 0;
	
}
