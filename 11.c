#include <stdio.h>

int main(){
	
	int idade=0;
	
	printf("Por favor informe a idade: \n");
	scanf("%d", &idade);
	
	if(idade<16){
	printf("Nao eleitor!");
	}
	else if(18<idade && idade<65){
	printf("Eleitor Obrigatorio!");
	} else if(idade>=16 && idade<=18 || idade>=65){
	printf("Eleitor facultativo!");
	}
	return 0;
}
