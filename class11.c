// Biblioteca / Library

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Tipos primitivos
// int, float, char, bool

// Variáveis de escopo global
int numGlobal;

// Função / Método principal
int main (){
	// Variáveis de escopo local
	
	float numQuebrado;
	
	// Inicializadores de variáveis com valores
	char letter = 'a';
	bool ativo = true;
	int i;
	
	// Estruturas de repetição
	// Função | Método
	for(i = 0;i <= 10; i++){
		printf("%d\n", i); // \n -> Quebra de linha
	}
	
	while(ativo){
		printf("Ativo");
		ativo = false;
	}
	
	do{
		printf("\nVai executar independente da condição");
	}while(ativo);
	
	if(ativo == true){
		printf("\nAtivo");
	}else{
		printf("\nInativo");
	}
	int opcao;
	printf("\n Bem vindo ao sistema C");
	printf("\n 1 - Cadastro");
	printf("\n 2 - Login");
	printf("\n 3 - Sair");
	printf("\n Digite a opção desejada: ");
	scanf("%d", opcao);
	
	switch(opcao){
		case 1: 
		printf("\n Olá, você pode se cadastrar..");
		break;
		case 2:
		printf("\n Olá, voê pode logar..");
		break;
		case 3:
		printf("Saindo...");
		break;
		default:
		printf("\nErro");
	}
};