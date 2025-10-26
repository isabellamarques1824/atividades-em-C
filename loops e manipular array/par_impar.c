// Contar números pares e ímpares

#include <stdio.h>

int main(void){
    int numeros[8];
    int pares = 0;
    int impares = 0;

    for(int i = 0; i < 8; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
        if(numeros[i] % 2 == 0 ){
            pares += 1;
        }else{
            impares += 1;
        }
    }

    printf("Tem %d pares e %d impares", pares, impares);

    return 0;
}