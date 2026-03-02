#include <stdio.h>

#define MAX_FAHR 300
#define INCREMENTO 20
#define INICIO 0

/*Exercicios The C programming language - conversão fahrenheit*/

int main(void)
{
    int inicio, fim, incr;
    float fahr, celcius, inicio2, fim2, incr2;
    

    inicio = 0;
    fim = 300;
    incr = 20;

    fahr = inicio;

    /*Fahrenheit para celcius */

    printf("Fahrenheit      Celcius\n");

    while(fahr <= fim)
    {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f         %6.1f\n", fahr, celcius);
        fahr += incr;
    }

    /*Celcius para fahrenheit*/

    inicio2 = -17.8;
    fim2 = 148.9; 
    incr2 = 11.1;

    celcius = inicio2;

    printf("\n\nCelcius       Fahrenheit\n");

    while(celcius <= fim2)
    {
        fahr = (celcius * 9.0/5.0) + 32;
        printf("%4.1f         %6.0f\n", celcius, fahr);
        celcius += incr2;
    }

    /*versão com for*/


    for(fahr = INICIO; fahr <= MAX_FAHR; fahr += INCREMENTO)
    {
        printf("%4.0f         %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }

    /*versão for invertido*/

    
    for(fahr = MAX_FAHR; fahr >= INICIO; fahr -= INCREMENTO)
    {
        printf("%4.0f         %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }


    return 0;
}