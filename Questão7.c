/*QUEST�O7-Fa�a um algoritmo que receba dois n�meros,
 calcule e imprima um elevado ao outro.*/
#include <stdio.h>
#include <math.h>

int main(){
// variav�is
int n1;//valor da variavel ser� informada pelo usu�rio//
int n2;//valor da variavel ser� informada pelo usu�rio//
int resultado;//variav�l para encontramos o valor elevadp
//entrada de valores
    printf("informe o seu primeiro valor: \n");//prompt//
    scanf("%d", &n1);//l�  o numero colocado pelo usu�rio//
    printf("informe o seu segundo valor: \n");//prompt//
    scanf("%d", &n2);// L� o valor//
//processamento
    resultado = pow(n1,n2);//coloco a fun��o pow para conseguir elevar meu n1 ao n2 e obter o resultado que � minha potencia//
//Sa�da
    printf("seu numero elevado ao seu segundo valor e %d\n", resultado);//print da soma//

    return 0; //indica que foi concluido com sucesso//
}
