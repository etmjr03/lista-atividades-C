#include <stdio.h>

// fiz o código assumindo o exemplo 42% importo + 25% distribuidor = 67%

int main(){
	
	float valorfinal, valordecusto;
	
	printf("Preco de custo do carro?: \n");
	scanf("%f", &valordecusto);
	
	valorfinal = valordecusto * 1.67;
	
	printf("O preco final do carro eh: %.2f", valorfinal);
	
}
