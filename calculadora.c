#include <stdio.h>

int main() {
    int n1;
    int n2;
    int resultado;
    int escolha;
    int operacaovalida = 0;

    printf("\ncalculadora\n\n");

    printf("(1) somar\n(2) subtrair\n(3) multiplicar\n(4) dividir\n\n");

    printf("escolha uma opcao: ");
    scanf("%d", &escolha);

    if(escolha >= 1 && escolha <= 4){
        printf("digite o primeiro numero: ");
        scanf("%d", &n1);

        printf("digite o segundo numero: ");
        scanf("%d", &n2);

        switch (escolha){
            case 1:
                resultado = n1 + n2;
                operacaovalida = 1;
                break;
            case 2:
                resultado = n1 - n2;
                operacaovalida = 1;
                break;
            case 3:
                resultado = n1 * n2;
                operacaovalida = 1;
                break;
            case 4:
                if(n2 != 0) {
                    resultado = n1 / n2;
                    operacaovalida = 1;
                }else{
                    printf("Erro: divisao por zero nao permitida.\n");
                }
                break;
        }
        if (operacaovalida)
        {
            printf("o resultado e: %d\n", resultado);
        }
    
    }else{
        printf("escolha invalida. tente novamente.\n");
    }

    return 0;
}