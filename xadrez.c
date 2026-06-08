#include <stdio.h>

/* --- Funções Recursivas --- */

// A recursividade substitui o loop. Cada chamada reduz o número de casas.
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    printf("--- Movimentos das Peças (Nível Mestre) ---\n\n");

    // Torre: Recursiva
    printf("Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // Rainha: Recursiva
    printf("Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // Bispo: Recursiva
    printf("Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // Bispo: Loops Aninhados (Requisito extra)
    printf("Bispo (Loops Aninhados):\n");
    for (int i = 0; i < casasBispo; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

    // Cavalo: Loops aninhados + Fluxo de controle (Up 2, Right 1)
    printf("Cavalo (Loops Aninhados com controle de fluxo):\n");
    for (int i = 0; i < 2; i++) { // Loop vertical: Cima
        printf("Cima\n");
        
        // Loop horizontal: Direita
        for (int j = 0; j < 1; j++) {
            // Usando 'continue' para pular lógica desnecessária ou 'break' para sair
            // Simulando uma condição complexa onde o cavalo só vira na última etapa vertical
            if (i < 1) {
                continue; // Enquanto não chegar na 2ª casa vertical, não vira
            }
            printf("Direita\n");
        }
    }

    return 0;
}