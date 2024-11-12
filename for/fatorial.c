#include <stdio.h>

int main() {
    int n;
    int fatorial = 1;

    printf("Digite um valor para N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial não existe para números negativos.\n");
    } else {
        for (int i = n; i > 0; i--) {
            fatorial *= i;
            if (i != 1) {
            }
        }

        printf("O fatorial de %d é %d\n", n, fatorial);
    }

}