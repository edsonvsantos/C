#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int x = 1,y = 1;
	
	
	while(x != 0 || y !=0){
	    
	    printf("Digite x: ");
	scanf("%d", &x);
	
	printf("Digite y: ");
	scanf("%d", &y);
		
		if(x>0 && y>0){
			printf("\nQuadrante 1\n\n");
		}else if(x<0 && y>0){
			printf("\nQuadrante 2\n\n");
		}else if(x<0 && y<0){
			printf("\nQuadrante 3\n\n");
		}else if(x>0 && y<0){
			printf("\nQuadrante 4\n\n");
		}else{
			
		}
		
	}
	printf("\nPrograma encerrado");
}

