// Encontrar maior e menor valor

#include <stdio.h>

int main(void){

    int numeros[6];
    int maior = 0;
    int menor = 0;

    for(int i = 0; i < 6; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
    }


    maior = numeros[0];
    menor = numeros[0];
    
    for(int i = 0; i < 6; i++){
        if(maior < numeros[i]){
            maior = numeros[i];
        }
        if(menor > numeros[i]){
            menor = numeros[i];
        }
    }

    printf("O maior e %d e o menor e %d", maior, menor);
    return 0;
}