/*QUESTÃO23-No momento, por conta da administração pública péssima e da corrupção em todos os setores
estatais, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um
algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o
desconto foi de 9%.*/

#include <stdio.h>
#include <math.h>
//função
int main(){
	float vproduto, nvalor, valortotal;//variaveis
	
	printf("informe o valor do produto:\n");//entrada de dados
	scanf("%f", &vproduto);
	
	nvalor= (vproduto * 0.91);//91% do valor original pq 100%-9% é 91%
	
	valortotal = nvalor;//processamento com o desconto
	
	printf("o valor total com desconto e %2.f:\n", nvalor);//saída 
	
	return 0;
}
