#include <stdio.h>

int main(void)
{
    // Exercícios The C programming language - trabalhando com chars
    int c, nl, ne, nt;

    nl = 0;
    ne = 0;
    nt = 0;

    while((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            nl++;
        }else if (c == '\t')
        {
            nt++;
        }else if (c == ' ')
        {
            ne++;
        }  
    }

    printf("Linhas: %d Espaços: %d Tubulações: %d", nl, ne, nt);

    return 0;
}