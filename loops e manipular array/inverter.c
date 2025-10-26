// Inverter um array

#include <stdio.h>

int main(void){

    int array[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i <10; i++){
        printf("%d", array[i]);
    }

    int tamanho = 9;

    for(int i = 0; i < 5; i++){
        int troca = array[i];
        array[i] = array[tamanho-i];
        array[tamanho-i] = troca;
    }

    for(int i = 0; i <10; i++){
        printf("%d", array[i]);
    }

    return 0;
}