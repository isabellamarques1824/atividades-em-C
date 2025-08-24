#include <stdio.h>

#define NOTA_MINIMA 6

int main(){
    float nota;

    printf("Digite a sua nota:");
    scanf("%f", &nota);

    if(nota >=0 && nota <= 10){
        if(nota >= NOTA_MINIMA){
        printf("voce foi aprovado!\n");
        }else{
        printf("voce foi reprovado!\n");
        }

    }else{
        printf("voce nao digitou um valor valido!\n");
    }

    return 0;
}