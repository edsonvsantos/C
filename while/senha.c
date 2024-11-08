#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int senha;

	printf("Digite a senha: ");
	scanf("%d",&senha);
	
	while(senha != 2002){
	    printf("Senha inválida\n");
	    
	    printf("\nDigite a senha: ");
	scanf("%d",&senha);
	    
	}
	printf("\nAcesso permitido");
}