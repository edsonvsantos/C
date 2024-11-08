#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float salario, imposto=0.0;
	
	printf("Digite o salário: ");
	scanf("%f", &salario);
	
	if(salario<=2000.00){
			printf("Isento");
	}else if(salario<=3000.00){
		imposto = (salario-2000.00)*0.08;
		printf("Imposto: R$%.2f", imposto);
	}else if(salario<=4500.00){
		imposto=(1000.00*0.08)+((salario - 3000.00)*0.18);
		printf("Imposto: R$%.2f", imposto);
	}else{
		imposto=(1000.00*0.08)+(1500.00*0.18)+((salario-4500.00)*0.28);
		printf("Imposto: R$%.f2", imposto);
	}
	return 0;
}