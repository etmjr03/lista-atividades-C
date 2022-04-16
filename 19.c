#include <stdio.h>

int main(){
	
	int numero, i, cont=0;
	
	printf("Digite o numero: \n");
	scanf("%d", &numero);
	
	for(i=1; i<=numero; i++)
	if(numero%i == 0)
	
	cont = cont + 1;
	
	if(cont == 2){
	printf("Esse numero eh primo!");
	} else {
	printf("Esse numero nao eh primo!");
	}
	
	return 0;
}
