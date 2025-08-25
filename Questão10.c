/*QUESTÃO10- Faça um algoritmo que calcule e imprima a área das seguintes figuras geométricas:
• triângulo; quadrado; círculo; trapézio; retângulo; losango. */

#include <stdio.h>
#include <math.h>
// PRECISO REVER TA DANDO AO ERRADOOOOOOO!!
int main(){
	//variavéis
	float base, altura;
	float lado, raio;
	float basemaior, basemenor;
	float dmaior, dmenor;
	float area, opcao;
	
	//dados de entradas triangulo
	printf("Digite a base e a altura do triângulo: ");
    scanf("%f %f", &base, &altura);
    area = (base * altura) / 2;
    printf("Área do triângulo: %.2f\n", area);
    
    
    printf("Digite a base maior, a base menor e a altura do trapézio: ");
    scanf("%f %f %f", &basemaior, &basemenor, &altura);
    area = ((basemaior + basemenor) * altura) / 2;
    printf("Área do trapézio: %.2f\n", area);

    // Retângulo
    printf("Digite a base e a altura do retângulo: ");
    scanf("%f %f", &base, &altura);
    area = base * altura;
    printf("Área do retângulo: %.2f\n", area);

    // Losango
    printf("Digite a diagonal maior e a diagonal menor do losango: ");
    scanf("%f %f", &dmaior, &dmenor);
    area = (dmaior * dmenor) / 2;
    printf("Área do losango: %.2f\n", area);

    return 0;
        
		
}

