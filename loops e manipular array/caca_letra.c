#include <stdio.h>

int main(void){

    char palavra[] = "banana";
    char letras_printadas[10];
    int usadas = 0;




    for(int i = 0; i  < 6; i++){
        int ja_foi = 0;
        int contador =0;
        char letra = palavra[i];
        for(int j = 0; j < 6; j++){
            if(letra == palavra[j]){
                contador++;
            }
            
        }
        for(int k = 0; k < 6; k++){
            if(letra == letras_printadas[k]){
                ja_foi = 1;
                break;
            }
        
        }
        if(!ja_foi){
            printf("%c: %d\n", letra, contador);
            letras_printadas[usadas] = letra;
            usadas++;
        }
    }

    return 0;
}