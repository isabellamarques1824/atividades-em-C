// Substituir valores negativos por zero

#include <stdio.h>

int main(void){

    int numeros[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
        if(numeros[i] < 0){
            numeros[i] = 0;
        }
    }

    printf("Atencao, o seu array pode conter alteracoes pois numeros negativos nao sao aceitos.\n");
    printf("O seu array: \n");
    for(int i = 0; i < 6; i++){
        printf("%d ", numeros[i]);
    }
    return 0;
}