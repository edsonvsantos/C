#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
int x, n;

printf("Digite quantos números serão lidos: ");
scanf("%d", &n);

for(int i=0;i<=n;i++){
	if(i>=10 && i<=20){
		printf("\n%d", i);
		printf(" in");
	}else{
		printf("\n%d", i);
		printf(" out");
	}
	
}
}