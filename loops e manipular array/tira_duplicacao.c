#include <stdio.h>

int main(void){

    int listanumeros[20];
    int ncorrigidos[20];
    int jafoi = 0;
    int usados = 0;

    for(int i = 0; i < 10; i++){
        printf("digite o %d numero: ", i+ 1);
        scanf("%d", &listanumeros[i]);
    }

    for(int i = 0; i < 10; i++){
        jafoi = 0;
        for(int j = 0; j < 10; j++){
            if(listanumeros[i] == ncorrigidos[j]){
                jafoi = 1;
                break;
            }
        }
        if(!jafoi){
            ncorrigidos[usados] = listanumeros[i];
            usados++;
        }
    }

    for(int i  = 0; i < usados; i++){
        printf("%d", ncorrigidos[i]);
    }
    return 0;
}