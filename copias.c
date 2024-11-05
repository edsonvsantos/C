#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int copias;	
	float pago;
	
	printf("Digite o número de cópias: ");
	scanf("%i", &copias);
	
	if(copias<=100){
		
		pago = copias*0.25;
		printf("O total a ser pago por %i", copias);
		printf(" é de %.2f", pago);
	}else{
		pago = copias*0.20;
		printf("O total a ser pago por %i", copias);
		printf(" é de %.2f", pago);
	}
}
