/*QUESTÃO16- Crie um programa que receba três nomes quaisquer por meio da linha de execução do programa, e
os imprima na tela da seguinte maneira: o primeiro e o último nomes serão impressos na primeira linha
um após o outro, o outro nome (o segundo) será impresso na segunda linha.*/

#include <stdio.h>

//função
int main(){
	
// variaveis
	char n1[20];
	char n2[20];
	char n3[20];
//entradas de dados	
	printf("informe o primeiro nome:");//usuario vai inserir o nome
	scanf("%s", &n1 );//lê os dados
	printf("informe o segundo nome:");
	scanf("%s", &n2 );//lê os dados
	printf("informe o terceiro nome:");
	scanf("%s", &n3 );//lê os dados
	
// saída
	printf(" %s %s\n", n1, n3);
	printf("%s\n", n2);
	
	
	return 0;
}
