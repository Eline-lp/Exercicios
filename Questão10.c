/*QUEST�O10- Fa�a um algoritmo que calcule e imprima a �rea das seguintes figuras geom�tricas:
� tri�ngulo; quadrado; c�rculo; trap�zio; ret�ngulo; losango. */

#include <stdio.h>
#include <math.h>
// PRECISO REVER TA DANDO AO ERRADOOOOOOO!!
int main(){
	//variav�is
	float base, altura;
	float lado, raio;
	float basemaior, basemenor;
	float dmaior, dmenor;
	float area, opcao;
	
	//dados de entradas triangulo
	printf("Digite a base e a altura do tri�ngulo: ");
    scanf("%f %f", &base, &altura);
    area = (base * altura) / 2;
    printf("�rea do tri�ngulo: %.2f\n", area);
    
    
    printf("Digite a base maior, a base menor e a altura do trap�zio: ");
    scanf("%f %f %f", &basemaior, &basemenor, &altura);
    area = ((basemaior + basemenor) * altura) / 2;
    printf("�rea do trap�zio: %.2f\n", area);

    // Ret�ngulo
    printf("Digite a base e a altura do ret�ngulo: ");
    scanf("%f %f", &base, &altura);
    area = base * altura;
    printf("�rea do ret�ngulo: %.2f\n", area);

    // Losango
    printf("Digite a diagonal maior e a diagonal menor do losango: ");
    scanf("%f %f", &dmaior, &dmenor);
    area = (dmaior * dmenor) / 2;
    printf("�rea do losango: %.2f\n", area);

    return 0;
        
		
}

