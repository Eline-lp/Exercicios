/*QUEST�O16- Crie um programa que receba tr�s nomes quaisquer por meio da linha de execu��o do programa, e
os imprima na tela da seguinte maneira: o primeiro e o �ltimo nomes ser�o impressos na primeira linha
um ap�s o outro, o outro nome (o segundo) ser� impresso na segunda linha.*/

#include <stdio.h>

//fun��o
int main(){
	
// variaveis
	char n1[20];
	char n2[20];
	char n3[20];
//entradas de dados	
	printf("informe o primeiro nome:");//usuario vai inserir o nome
	scanf("%s", &n1 );//l� os dados
	printf("informe o segundo nome:");
	scanf("%s", &n2 );//l� os dados
	printf("informe o terceiro nome:");
	scanf("%s", &n3 );//l� os dados
	
// sa�da
	printf(" %s %s\n", n1, n3);
	printf("%s\n", n2);
	
	
	return 0;
}
