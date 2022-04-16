#include <stdio.h>

int main(){
	
	int idade, quantidade = 0;
	float soma = 0;
	
	do {
	printf("Digite a idade: \n");
	scanf("%d", idade);
	
	soma += idade;
	quantidade++;	
	printf("A media das idades eh %.2f\n", soma/quantidade);
		
	} while(idade>0);

	return 0;
}
