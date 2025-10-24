#include <stdio.h>

int main(){
    int ncasas, i;
    char direcao[80], escolha[20];
    int pecas;

        printf("Movimento das peças de xadrez:\n");
        printf("\n");
        printf("====================================================================================================\n");
        printf("Torre: Move-se em linha reta, tanto para direita quanto para esquerda, para cima e para baixo. \n");
        printf("====================================================================================================\n");
        printf("Bispo: Move-se na diagonal, tanto para direita quanto para esquerda. \n");
        printf("====================================================================================================\n");
        printf("Rainha: Move-se para todas as direções. \n");
        printf("====================================================================================================\n");
        printf("\n");

    printf("Qual peça deseja mover ? \n");
    printf("\n");
    printf("[1] Torre \n");
    printf("[2] Bispo \n");
    printf("[3] Rainha \n");
    scanf ("%d", &pecas);

    printf("Quantas casas deseja mover: ");
    scanf ("%d", &ncasas);

    printf("Para qual direção deseja se mover [direita, esquerda, cima, baixo, diagonal direita, diagonal esquerda: ");
    scanf ("%s", direcao);

    if (pecas == 1){
        i = 1;
        while (i <= ncasas)
        {
          printf("A torre moveu para %s \n", direcao);
          i++;
        } 
    } else if (pecas == 2){
        i = 1;
        do
        {
          printf("O bispo moveu para %s \n", direcao);
          i++;
          
        } while (i <= ncasas);
    } else if (pecas == 3){
        for (i = 1; i <= ncasas; i++)
        {
          printf("A rainha moveu para %s \n", direcao);
        }
    } 

    return 0;
}
