//QUEST�O 10.1 - calcular e exibir  area de um quadrado a partir do valor  de sua diagonal que ser� digitado

#include <stdio.h>
#include <math.h>

int main(){
// variaveis
float lado;
float diagonal;
float area;

//Entardas de dados
	printf("Digite a digonal do quadrado: ");//usuario insere o valor da diagonal
    scanf("%f", &diagonal);//l� o valor
 //processamento   
    area = pow(diagonal,2)/2;//para achamos a area devemos elevar o comprimento da diagonal ao quadrado e depois dividir por dois e assim obter a area do quadrado
    
 //sa�da   
    printf("�rea do quadrado: %.2f\n", area);//mostrar a area do quadrado conforme os dados de entrada da diagonal
    return 0;//concluido com sucesso
	}
