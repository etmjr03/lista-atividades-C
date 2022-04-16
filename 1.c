#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float convercaor, convercaod, dolar, real;
	
	printf("Digite o valor em reais:\n");
	scanf("%f", &real);
	
	printf("Digite o valor do dolar:\n");
	scanf("%f", &dolar);
	
	convercaor = real * dolar;
	convercaod = real / dolar;
	
	printf("Reais em dolar: %.2f\n", convercaod);
	printf("Dolar em reais: %.2f\n", convercaor);

	return 0;
}
