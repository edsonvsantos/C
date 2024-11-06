#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int cod, quant;
	float total;
	
	printf("1 - Cachorro Quente - R$4,00\n2 - X-Salada - R$4,50\n3 - X-Bacon - R$5,00\n4 - Torrada Simples - R$2,00\n5 - Refrigerante - R$1,50");
	
	printf("\n\nDigite o código: ");
	scanf("%d", &cod);
	
	printf("\nDigite a quantidade: ");
	scanf("%d", &quant);
	
	if(cod == 1){
		total = 4*quant;
	}else if(cod == 2){
		total = 4.5*quant;
	}else if(cod == 3){
		total = 5*quant;
	}else if(cod == 4){
		total = 2*quant;
	}else if(cod == 5){
		total = 1.5*quant;
		}else{
		printf("\nO código não está na lista");}
		
		printf("Total: R$%.2f",total);
	
}