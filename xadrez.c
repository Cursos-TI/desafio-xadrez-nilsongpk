#include <stdio.h>

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    int casasTorre = 5; // Número de casas para mover
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    int casasBispo = 5; // Número de casas para mover
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    int casasRainha = 8; // Número de casas para mover
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
