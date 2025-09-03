#include <stdio.h>

int main() {
    int j, i;
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int coluna[10] = {1,2,3,4,5,6,7,8,9,10};

    int tabuleiro[10][10] = {0}; // inicializa com zeros

    // navio horizontal
    int linhaNavio = 2; // linha C (2)
    int colunaincio = 3; // coluna 4 (3)
    int tamanhoNavio = 3; // tamanho do navio
    for (i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaNavio][colunaincio + i] = 3; 
    }

    // navio vertical
    int colunaNavio = 7; 
    int linhaInicio = 5; 
    int tamanhoNavio2 = 3;
    for (i = 0; i < tamanhoNavio2; i++) {
        tabuleiro[linhaInicio + i][colunaNavio] = 3; 
    }

    // navio diagonal 
    int colunaNavio2 = 0; // coluna 1 (0)
    int linhanavio2 = 1;  // linha B (1)
    int tamanhoNavio3 = 3;
    for (i = 0; i < tamanhoNavio3; i++) {
        tabuleiro[linhanavio2 + i][colunaNavio2 + i] = 3; 
    }

    //   navio diagonal 
    int colunaNavio3 = 9; // coluna 10 (9)
    int linhanavio3 = 3;  // linha I (8)
    int tamanhoNavio4 = 3;
    for (i = 0; i < tamanhoNavio4; i++) {
        tabuleiro[linhanavio3 - i][colunaNavio3 - i] = 3; 
    }

    // impressão do tabuleiro
    printf("   TABULEIRO NAVAL\n");

    // Cabeçalho das colunas
    printf("   ");
    for (i = 0; i < 10; i++) {
        printf("%2d ", coluna[i]);
    }
    printf("\n");

    // Linhas do tabuleiro
    for (j = 0; j < 10; j++) {
        printf("%c  ", linha[j]); 
        for (i = 0; i < 10; i++) {
            printf("%2d ", tabuleiro[j][i]);
        }
        printf("\n");
    }

    return 0;
}
