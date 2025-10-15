// Contar quantos números são maiores que a média

#include <stdio.h>

int main(void){
    int numeros[5];
    int soma = 0;
    int contador = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    
    float media = soma / 5.0;

    for(int i = 0; i < 5; i++){
        if(numeros[i] > media){
            contador ++;
        }
    }

    printf("%d numeros são maiores que a media(%f)", contador,media);

    return 0;
}