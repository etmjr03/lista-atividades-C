#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float kbps;
	
	printf("Divite o valor de kbps: \n");
	scanf("%f", &kbps);
	
	printf("O valor em mbps eh: %.2f\n", kbps * 1000);
	}
