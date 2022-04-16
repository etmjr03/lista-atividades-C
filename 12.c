#include <stdio.h>

int main(){
	
	int inteiro;
	
	printf("Digite o numero INTEIRO: \n");
	scanf("%d", &inteiro);
	
	if(inteiro % 2 == 0){
	printf("O numero eh Par!");
	}
	else if(inteiro % 2 == 1){
	printf("O numero eh Impar!");
	}
	return 0;
}
