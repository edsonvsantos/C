#include <stdio.h>// Entrada e Saída de dados
#include <stdlib.h>//Bibliotecas essenciais para C
#include <locale.h>//Bibliotecas para as linguagens
#include <string.h>//Bibliotecas para Strings
//Strings
int main(){

    setlocale(LC_ALL, "Portuguese"); //Identificação de todas as linguagens

    char letter = 'a'; // ''Aspas simples para um caracter

    char origem[10] = "Origem"; // Aspas duplas para strings
    char destino[10] = "Destino";

    printf("%c\n", letter); //%c Tipo de caracter
    printf("%s\n", origem); //%s Strings
    printf("%s\n", destino);
   
   strcpy(destino, origem); //Copia a String de origem para a de destino

    if(strcmp(origem, "Origem") == 0){ //Compara o valor de uma String
        printf("O conteúdo é igual.");
    }else{
        printf("O conteúdo não é igual.");
    }
   printf("%s\n", origem);
   printf("%s\n", destino); //%s Strings
    system("pause"); //Pausar
    return 0; // Função INT precisa retornar um inteiro
   
}