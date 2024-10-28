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
	bool ativo = false;
	int i;
	
	// Estruturas de repetição
	// Função | Método
	for(i = 0;i <= 10; i++){
		printf("%d\n", i);
	}
	
	while(!ativo){
		printf("Olá, você está ativo");
		ativo = true;
	}
};