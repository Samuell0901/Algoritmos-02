#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário para digitar um número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}