#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, tentativa, tentativas = 0;
    srand(time(NULL));  // Inicializa a semente do gerador de números aleatórios

    numero_secreto = rand() % 100 + 1;  // Gera um número aleatório entre 1 e 100

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número secreto entre 1 e 100.\n");

    do {
        printf("Digite a sua tentativa: ");
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa < numero_secreto) {
            printf("Tente um número maior!\n");
        } else if (tentativa > numero_secreto) {
            printf("Tente um número menor!\n");
        } else {
            printf("Parabéns! Você adivinhou o número em %d tentativas.\n", tentativas);
        }
    } while (tentativa != numero_secreto);

    return 0;
}
