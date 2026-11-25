#include <stdio.h>

int main(void) {
    int numero = 15;
    int *ponteiro = &numero;

    printf("Valor antes: %d\n", numero);

    *ponteiro = 50;

    printf("Valor depois: %d\n", numero);

    return 0;
}
