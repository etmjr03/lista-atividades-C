#include<stdio.h>

int main(){
	
	int numero1, numero2;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &numero1);
	printf("Digite o segundo numero: \n");
	scanf("%d", &numero2);
	
	if(numero1>numero2){
	printf("%d eh maior!", numero1);
	} else if (numero2>numero1){
	printf("%d eh maior!");
	} else {
	printf("Sao iguais");
	}
	return 0;
}
