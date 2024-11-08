#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int cod=0, a=0, g=0, d=0;

	while(cod!=4){
		
		printf("\n\n1. Álcool\n2. Gasolina\n3. Diesel\n4. Fim");
	printf("\n\nDigite o código desejado: ");
	scanf("%d",&cod);
	
	system("cls");
		
		if(cod==1){
			a = a + 1;
		}else if(cod==2){
			g = g + 1;
		}else if(cod==3){
			d = d + 1;
		}else{
			printf("Código não existe");

		}
		printf("\n\nMUITO OBRIGADO\n\nÁlcool: %d\nGasolina: %d\nDiesel: %d", a,g,d);
		
	}
}