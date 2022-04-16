#include <stdio.h>
#include <stdlib.h>

int main(){
  
    int base, expoente, i, resultado = 1;
  
    printf("Informe o numero: ");
    scanf("%d",&base);
    printf("Informe o expoente: ");
    scanf("%d", &expoente);
  
    for(i=0; i<expoente; i++)
    
	resultado *= base;
	 
    if(expoente == 0){
    printf("Todo numero elevado a 0 eh 1 portanto\n");
    resultado = 1;
    } 
	else if(expoente<0){
    printf("Informe apenas expoentes positivos!\n");
    return 0;
	}
	
    printf("%d elevado a %d = %d\n",base,expoente,resultado);

	return 0;
}
