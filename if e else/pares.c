#include <stdio.h>

int main() {
    
    int numero;

    printf("digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("seu numero e par.");
    } else {
        printf("seu numero é impar.");
    }

    return 0;
}