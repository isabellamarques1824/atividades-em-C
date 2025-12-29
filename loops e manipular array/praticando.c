#include <stdio.h>

int main(void){
    int quantidade;

    printf("quantos numeros voce deseja digitar? ");
    scanf("%d", &quantidade);

    int numeros[quantidade];
    float soma = 0; 
    float media = 0;

    for(int i = 0; i < quantidade; i++){
        printf("Digite o %d numero: ", i +1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / quantidade;

    int menor = numeros[0];
    int maior =numeros[0];
    for(int i = 0; i < quantidade; i++){
        if(maior < numeros[i]){
            maior = numeros[i];
        }
        if(menor > numeros[i]){
            menor = numeros[i];
        }
    }

    printf("\nTabela: \n Soma: %.2f \n Media: %.2f \n Maior: %d \n Menor: %d \n ", soma, media, maior, menor);

    return 0;
}