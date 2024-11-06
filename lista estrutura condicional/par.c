#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	if(num % 2 == 0){
		printf("\nPAR");
	}else{
		printf("\nÍMPAR");
	}
}