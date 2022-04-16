#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int gols1, gols2;
	char nome1[10], nome2[10];
	
	printf("Digite o nome do time 1\n");
	gets(nome1);
	printf("Digite o nome do time 2\n");
	gets(nome2);
	
	printf("Digite a quantidade de gols do time 1\n");
	scanf("%d", &gols1);
	printf("Digite a quantidade de gols do time 2\n");
	scanf("%d", &gols2);
	
	if(gols1 == gols2){
	printf("O time %s e o time %s ganharam 1 ponto", nome1, nome2);
	}
	else if(gols1 > gols2){
	printf("O time %s ganhou 3 pontos e o time %s ganhou 0 pontos", nome1, nome2);
	}
	else if(gols1 < gols2){
	printf("O time %s ganhou 0 pontos e o time %s ganhou 3 pontos", nome1, nome2);
	} else {
	printf("opcao invalida!");
	}
	return 0;
}
