//strings

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    
	char name[10];
	char word[10];

	printf("Digite seu nome: ");
	scanf("%s", &name);   //%c para CARACTER | & é o endereço de memória

printf("Digite uma palavra: ");
scanf("%s", &word);     // %s STRING

	printf("O nome é: %s\n", name);
	printf("A palavra é %s\n", word);

	strcpy(word, name); // Variável de destino vai receber o conteúdo da variável de origem

	printf("O nome é: %s\n", name);
	printf("A palavra é %s\n", word);

	system("pause");
	return 0;
}
