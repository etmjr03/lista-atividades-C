#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float r, a, h;
	
	printf("Digite o valor da altura: \n");
	scanf("%f", &h);
	printf("Digite o valor do raio: \n");
	scanf("%f", &r);

	a = 2 * 3.14 * r * (r + h);
	
	printf("A area do cilindro eh: %.2f", a);
	
	return 0;
}
