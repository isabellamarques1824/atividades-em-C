#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tempo = time(0);

    srand(tempo);
    int numerosecreto = rand() % 100;
    int chutedousuario;
    int tentativas;
    int pontos = 1000;
    int desconto;
    int escolha;
    int vezes = 1;

    printf("Seja bem vindo ao jogo de adivinhação!\n");

    printf("nivel de dificuldade: facil(1) medio(2) dificil(3)\n");
    printf("escolha um:");
    scanf("%d", &escolha );

    switch (escolha)
    {
        case 1:
            tentativas = 20;
            break;

        case 2:
            tentativas = 15;
            break;
    
        default:
            tentativas = 6;
            break;
    }


    for(int i = 1; i <= tentativas; i++){

        printf("tentativa numero %d: ", i);
        scanf("%d",&chutedousuario);

        int acertou = chutedousuario == numerosecreto;
        int menor = chutedousuario < numerosecreto;

        if(chutedousuario < 0) {
            printf("voce não pode digitar numeros negativos tente novamente!\n");
            tentativas = tentativas - 1;
            continue;
        }

        if(chutedousuario >  numerosecreto){
            desconto = chutedousuario - numerosecreto;
            pontos = pontos - desconto;
        }

        else if(chutedousuario < numerosecreto){
            desconto = numerosecreto - chutedousuario;
            pontos = pontos - desconto;
        }

        if(acertou) {
            printf("parabens! voce acertou o numero secreto.\n");
            printf("voce acertou o numero secreto em %d tentativas e com o total de pontos: %d ", vezes, pontos);

            break;
        }

        else if(menor) {
            printf(" seu chute foi menor que o numero secreto!\n");
        }

        else {
            printf("seu chute foi maior que o numero secreto\n");
        }


        vezes = vezes + 1;

    
    }
}