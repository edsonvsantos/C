#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

float num;

printf("Digite o número: ");
scanf("%f", &num);

if(num>=0 && num<=25){
	printf("\nO número está entre 0 e 25");
}else if(num>=25.01 && num<=50){
	printf("\nO número está entre 25 e 50");
}else if(num>=50.01 && num<=75){
	printf("\nO número está entre 51 e 75");
}else if(num>=75.01 && num<=100){
    printf("\nO número está entre 76 e 100");
}else{
	printf("\nO número está fora de intervalo");
}

}