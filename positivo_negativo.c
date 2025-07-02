#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero:");
    scanf("%d", &numero);

    if(numero > 0){
        printf("O seu numero é positivo");
    }else if(numero < 0){
        printf("O seu numero é negativo.");
    }else{
        printf("O seu numero é zero.");
    }

    return 0;
}