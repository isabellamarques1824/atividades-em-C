#include <stdio.h>
#include <string.h>

int main(){
    char nomesecretro[] = "melancia";

    char chute;
    int acertou = 0;
    int enforcou = 0;
    int tamanho = strlen(nomesecretro);
    int tentativacorreta = 0;

    do{
        scanf(" %c", &chute);

        for (int i = 0; i < tamanho; i++){
            if(chute == nomesecretro[i]){
                printf("na posicao %d tem essa letra", i);
            }
        }
        
    } while (!acertou && !enforcou);

    return 0;
}