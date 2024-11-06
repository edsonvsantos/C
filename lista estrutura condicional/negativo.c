#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	if(num<0){
		printf("\nNEGATIVO");
	}else{
		printf("\nNÃO NEGATIVO");
	}
	
}