#include <stdio.h>

#define MULTIPLICADOR 10

int main(void){
    int numero;
    printf("digite um numero:");
    scanf("%d", &numero);
    for (int i = 1; i <= MULTIPLICADOR; i++)
    {
        int resultado = i * numero;
        printf("%d x %d = %d \n", numero, i, resultado);
    }
    
}