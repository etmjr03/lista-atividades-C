#include <stdio.h>
 
int main(){
int fatorial, numero;

printf("Calculo Fatorial\n");
printf("Insira o valor: \n");
scanf("%d", &numero);
 
for(fatorial = 1; numero > 1; numero = numero - 1)
fatorial = fatorial * numero;
 
printf("O fatorial eh: %d", fatorial);

return 0;

}
