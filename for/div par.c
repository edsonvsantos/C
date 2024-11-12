#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float n1=0,n2=0, div=0;
	int n=0;
	
	printf("Quantos pares você quer dividir? ");
	scanf("%d", &n);
	
	for(int i=0;i<=n;i++){
		
		printf("\nDigite n1: ");
		scanf("%f", &n1);
		
		printf("\nDigite n2: ");
		scanf("%f", &n2);
		
		div = n1/n2;
		
		if(n2!=0){
		printf("A divisão é %.2f", div);
		printf("\n\n");
		}else{
			printf("\nDivisão impossível\n");
		}
	}
}