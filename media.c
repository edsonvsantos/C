#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	float n1, n2, n3, n4, m;
	
	printf("Digite n1: ");
	scanf("%f", &n1);
	
	printf("Digite n2: ");
	scanf("%f", &n2);
	
	printf("Digite n3: ");
	scanf("%f", &n3);
	
	printf("Digite n4: ");
	scanf("%f", &n4);
	
	m = (n1+n2+n3+n4)/4;
	
	if(m>6.9){
		printf("A média é %.2f", m);
		printf("\nAPROVADO");
	}else{
		printf("A média é %.2f", m);
		printf("\nREPROVADO");
	};
}
