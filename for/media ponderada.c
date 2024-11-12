#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float n1=0,n2=0,n3=0, media=0;
	int n=0;
	
	printf("Quantas médias ponderadas você quer calcular? ");
	scanf("%d", &n);
	
	for(int i=0;i<=n;i++){
		printf("\nDigite n1: ");
		scanf("%f", &n1);
		
		printf("\nDigite n2: ");
		scanf("%f", &n2);
		
		printf("\nDigite n3: \n");
		scanf("%f", &n3);
		
		media = (n1 * 2 + n2 * 3 + n3 * 5) / (2 + 3 + 5);
		
		printf("A média ponderada é %.2f", media);
		printf("\n\n");
	}
}