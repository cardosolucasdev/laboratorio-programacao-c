#include <stdio.h>

void dobrar(int *valor) {
    *valor = *valor * 2;
}

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    dobrar(&numero);

    printf("Resultado apos dobrar: %d\n", numero);

    return 0;
}
