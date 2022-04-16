#include <stdio.h>

int main(){
	
	float peso, altura, imc;
	
	printf("Digite a sua altura: \n");
	scanf("%f", &altura);
	printf("Digite o seu peso: \n");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	
	if(imc<20){
	printf("Seu imc eh %.2f\n", imc);
	printf("Abaixo do peso");
	}
	else if(imc>=20 && imc<25){
	printf("Seu imc eh %.2f\n", imc);
	printf("Peso normal");
	} 
	else if(imc>=25 && imc<30){
	printf("Seu imc eh %.2f\n", imc);
	printf("Sobre o peso");
	}
	else if(imc>=30 && imc<=40){
	printf("Seu imc eh %.2f\n", imc);
	printf("Obeso");
	}
	else if(imc>40){
	printf("Seu imc eh %.2f\n", imc);
	printf("Obeso mórbido");
	}

	return 0;
}
