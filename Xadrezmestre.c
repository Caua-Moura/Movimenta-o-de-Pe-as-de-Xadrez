#include <stdio.h>

void moverTorre(int n, char direcao[]) {
    if (n > 0) {
        printf("A torre moveu para %s\n", direcao);
        moverTorre(n - 1, direcao);
    }
}

void moverRainha(int n, char direcao[]) {
    if (n > 0) {
        printf("A rainha moveu para %s\n", direcao);
        moverRainha(n - 1, direcao);
    }
}

void moverBispo(int vertical, int horizontal, char direcao[]) {
    if (vertical > 0) {
        for (int i = 1; i <= vertical; i++) {
            for (int j = 1; j <= horizontal; j++) {
                printf("O bispo moveu para %s\n", direcao);
            }
        }
        moverBispo(vertical - 1, horizontal, direcao);
    }
}

void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    printf("O cavalo se move em L (duas casas para cima e uma para a direita):\n\n");

    for (int i = 1; i <= 2; i++) { 
        printf("Cima\n");
        if (i == 2) {
            for (int j = 1; j <= 1; j++) {
                printf("Direita\n");
                break; 
            }
        }
    }
}

int main() {
    int ncasas;
    char direcao[80];
    int pecas;

    printf("Movimento das peças de xadrez:\n\n");
    printf("====================================================================================================\n");
    printf("Torre: Move-se em linha reta, tanto para direita quanto para esquerda, para cima e para baixo. \n");
    printf("====================================================================================================\n");
    printf("Bispo: Move-se na diagonal, tanto para direita quanto para esquerda. \n");
    printf("====================================================================================================\n");
    printf("Rainha: Move-se para todas as direções. \n");
    printf("====================================================================================================\n");
    printf("Cavalo: Se move em L, ou seja, duas casas em uma direção e uma perpendicularmente. \n");
    printf("====================================================================================================\n\n");

    printf("Qual peça deseja mover?\n\n");
    printf("[1] Torre \n");
    printf("[2] Bispo \n");
    printf("[3] Rainha \n");
    printf("[4] Cavalo \n");
    scanf("%d", &pecas);

    printf("Quantas casas deseja mover: ");
    scanf("%d", &ncasas);

    printf("Para qual direção deseja se mover [direita, esquerda, cima, baixo, diagonal_direita, diagonal_esquerda]: ");
    scanf("%s", direcao);

    if (pecas == 1) {
        printf("\nMovimento da Torre:\n");
        moverTorre(ncasas, direcao);
    } 
    else if (pecas == 2) {
        printf("\nMovimento do Bispo:\n");
        moverBispo(2, 2, direcao); 
    } 
    else if (pecas == 3) {
        printf("\nMovimento da Rainha:\n");
        moverRainha(ncasas, direcao);
    } 
    else if (pecas == 4) {
        moverCavalo();
    } 
    else {
        printf("Peça inválida!\n");
    }

    return 0;
}
