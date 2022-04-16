#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float valor1, valor2;
	char operador;
	
	printf("Selecione uma das opcoes\n+ para soma\n- para subtracao\n* para multiplicacao\n / para divisao\n");
	scanf("%c", &operador);
	printf("Digite o primeiro valor: \n");
	scanf("%f", &valor1);
	printf("Digite o segundo valor: \n");
	scanf("%f", &valor2);

		
	switch(operador){
		case '+':
		printf("resultado da soma eh: %.2f\n", valor1 + valor2);
		break;
		case '-':
		printf("resultado da subtracao eh: %.2f\n", valor1 - valor2);
		break;
		case '*':
		printf("resultado da multiplicacao eh: %.2f\n", valor1 * valor2);
		break;
		case '/':
		while(valor2==0){
		printf("Por favor digite um valor diferente de 0: \n");
		scanf("%f", &valor2);
		}
		printf("resultado da divisao eh: %.2f\n", valor1 / valor2);
		break;
		default:
		printf("Opcao invalida!");
	}

	return 0;
}
