#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	float n1, n2, r;
	
	printf("Digite n1: ");
	scanf("%f", &n1);
	
	printf("Digite n2: ");
	scanf("%f", &n2);
	
	r = n1 / n2;
	
	printf("Resultado = %.2f", r);
}
