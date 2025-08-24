#include <stdio.h>

int main(){

    int n1, n2;

    printf("digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("digite o segundo numero: ");
    scanf("%d", &n2);

    if(n1 == n2){
        printf("seus numeros sao iguais.");
    }else if(n1 > n2){
        printf("%d e maior que %d.", n1, n2);
    }else{
        printf("%d e maior que %d.", n2, n1);
    }

    return 0;
}