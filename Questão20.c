/*QUEST�O20- Uma determinada pessoa que trabalha com constru��o de piscinas precisa de um programa que
calcule o valor das constru��es solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
o comprimento, a largura e a profundidade da piscina a ser constru�da. Leve em considera��o que o
valor da constru��o � cobrado por m3 de �gua que a piscina conter� e o pre�o � de R$ 45.00 por m3*/

#include <stdio.h>
#include <math.h>

//Fun��o
int main(){
	float largura, comprimento, profundidade;//variaveis
	float volume, preco;
//entradas
	printf("informe a largura: ");
	scanf("%f", &largura);//l� o valor que o usu�rio inseriu
	printf("informe o comprimento: ");
	scanf("%f", &comprimento);
	printf("informe a profundidade da piscina: ");
    scanf("%f", &profundidade);
//processamento	para achar o volume multiplico os tr�s
	volume = comprimento * largura *profundidade;
	preco =volume * 45.0;// pre�o total pleo valor do que foi dado na quest�o
//sa�da	
	printf("\nVolume da piscina: %.2f m�\n", volume);
    printf("Pre�o da constru��o: R$ %.2f\n", preco);
    
	return 0;
	
}
