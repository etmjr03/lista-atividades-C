#include <stdio.h>

int main(){
	
	int verde;
	int amarela;
	int branca;
	int total;
	
	printf("Quantidade de bolas Verdes: \n");
	scanf("%d", &verde);
	printf("Quantidade de bolas Amarelas: \n");
	scanf("%d", &amarela);
	printf("Quantidade de bolas Brancas: \n");
	scanf("%d", &branca);
	
	total = (verde*10) + (amarela*5) + (branca*3);

	printf("valor total: %d", total);
	
	return 0;
	
}
