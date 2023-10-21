#include <stdio.h>

int main() {
    char operador;
    double numero1, numero2, resultado;

    while (1) {
        printf("Escolha uma operação (+, -, *, /) ou digite 'q' para sair: ");
        scanf(" %c", &operador);

        if (operador == 's' || operador == 'S') {
            break;
        }

        printf(" ");
        scanf("%lf", &numero1);

        printf(" ");
        scanf("%lf", &numero2);

        switch (operador) {
            case '+':
                resultado = numero1 + numero2;
                break;
            case '-':
                resultado = numero1 - numero2;
                break;
            case '*':
                resultado = numero1 * numero2;
                break;
            case '/':
                if (numero2 != 0) {
                    resultado = numero1 / numero2;
                } else {
                    printf("Erro! Divisão por zero não é permitida.\n");
                    continue;
                }
                break;
            default:
                printf("Operador inválido! Tente novamente.\n");
                continue;
        }

        printf("Resultado: %.2lf\n", resultado);
    }

    return 0;
}
