#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int duracao, inicio, fim;
	
	printf("Horário de início: ");
	scanf("%d", &inicio);
	
	printf("Horário de fim: ");
	scanf("%d", &fim);
	
	if(fim>inicio){
		duracao = fim - inicio;
		printf("A duração do jogo foi de %d horas", duracao);
	}else{
		duracao = 24 - inicio + fim;
		printf("A duração do jogo foi de %d horas", duracao);
	}
	
}