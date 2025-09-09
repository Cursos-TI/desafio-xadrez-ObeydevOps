#include <stdio.h>

void moverTorre(int casas, int atual) {
    if (atual > casas) {
        return;
    }
    printf("Direita\n");
    // Chamada recursiva para a próxima casa
    moverTorre(casas, atual + 1);
}

void moverBispo(int casas, int atual) {
    if (atual > casas) {
        return;
    }
    // Loop externo: movimento vertical (cima)
    for (int i = 1; i <= 1; i++) {
        // Loop interno: movimento horizontal (esquerda)
        for (int j = 1; j <= 1; j++) {
            printf("Cima\n");  // vertical da diagonal
            printf("Esquerda\n");  //  horizontal da diagonal
        }
    }
    // Chamada recursiva para a próxima casa 
    moverBispo(casas, atual + 1);
}

void moverRainha(int casas, int atual) {
    if (atual > casas) {
        return;
    }
    printf("Esquerda\n");
    // Chamada recursiva para a próxima casa
    moverRainha(casas, atual + 1);
}

int main() {
    // Variáveis para o número de casas
    int torre = 5, bispo = 5, rainha = 8, cavalo = 2;
    int i, j; 

    // Movimento da Torre (recursivo)
    printf("Movimento da torre:\n");
    moverTorre(torre, 1);  // Inicia recursão da casa 1
    printf("\n");  // Linha em branco para separar

    // Movimento do Bispo (recursivo com loops aninhados)
    printf("Movimento do bispo:\n");
    moverBispo(bispo, 1);  // Inicia recursão da casa 1
    printf("\n");  // Linha em branco para separar

    // Movimento da Rainha (recursivo)
    printf("Movimento da rainha:\n");
    moverRainha(rainha, 1);  // Inicia recursão da casa 1
    printf("\n");  // Linha em branco para separar

        printf("Movimento do cavalo:\n");
    // Loop para movimento vertical: 2 casas para cima
    for (j = 1; j <= 2; j++) {
        printf("Cima\n");
    }
    // Movimento horizontal: 1 casa para a direita (sem loop)
    printf("Direita\n");

    return 0;
}