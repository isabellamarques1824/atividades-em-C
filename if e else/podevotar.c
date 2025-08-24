#include <stdio.h>

int main(){
    int idade;

    printf("digite sua idade: ");
    scanf("%d", &idade);

    if(idade < 16){
        printf("Você não pode votar!");
    }else if(idade < 18 || idade > 65){
        printf("Você pode votar, mas não é obrigatório!");
    }else{
        printf("O seu voto é obrigatório.");
    }

    return 0;
}