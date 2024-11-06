#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int n1, n2;
	
	printf("Digite n1: ");
	scanf("%d", &n1);
	
	printf("Digite n2: ");
	scanf("%d", &n2);
	
	if(n1 % n2 == 0 || n2 % n1 == 0){
		printf("%d e %d são múltiplos\n", n1,n2);
	}else{
		printf("%d e %d não são múltiplos\n", n1,n2);
	}
}