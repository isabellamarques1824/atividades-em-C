#include <stdio.h>

#define NOTA_MINIMA 6

int main(){
    int nota;


    printf("digite a sua nota: ");
    scanf("%d", &nota);

    if(nota >= 0 && nota <= 10){
        if(nota >= NOTA_MINIMA){
            printf("parabens, voce foi aprovado! sua nota foi %d", nota);
        }else{
            printf("voce foi reprovado, precisa de recuperacao. sua nota foi %d", nota);
        }
    }else{
        printf("voce digitou uma valor invalido. tente novamente....");
    }
    return 0;
}