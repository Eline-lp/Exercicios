/*QUESTÃO7-Faça um algoritmo que receba dois números,
 calcule e imprima um elevado ao outro.*/
#include <stdio.h>
#include <math.h>

int main(){
// variavéis
int n1;//valor da variavel será informada pelo usuário//
int n2;//valor da variavel será informada pelo usuário//
int resultado;//variavél para encontramos o valor elevadp
//entrada de valores
    printf("informe o seu primeiro valor: \n");//prompt//
    scanf("%d", &n1);//lê  o numero colocado pelo usuário//
    printf("informe o seu segundo valor: \n");//prompt//
    scanf("%d", &n2);// Lê o valor//
//processamento
    resultado = pow(n1,n2);//coloco a função pow para conseguir elevar meu n1 ao n2 e obter o resultado que é minha potencia//
//Saída
    printf("seu numero elevado ao seu segundo valor e %d\n", resultado);//print da soma//

    return 0; //indica que foi concluido com sucesso//
}
