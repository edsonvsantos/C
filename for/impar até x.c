#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int x;
	
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	
	for(int i=1;i<=x;i++){
		if(i%2!=0){
			printf("\n%d", i);
		}else{

		}
	}
}