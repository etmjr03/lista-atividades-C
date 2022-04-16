#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

int main(void){
	
	float numero, quadrado, raizq;
	
	printf("Digite o numero: \n");
	scanf("%f", &numero);
	
	quadrado = numero * 2;
	raizq = sqrt(numero);
	
	if(fmod(numero, 2) == 0){	
	quadrado = numero * 2;
	raizq = sqrt(numero);
	
	printf("Numero ao quadrado: %.2f\n", quadrado);
	printf("Raiz quadrada do numero: %.2f\n", raizq);
	} else {
	printf("O numero eh impar!");
	
	}
	return 0;
}


