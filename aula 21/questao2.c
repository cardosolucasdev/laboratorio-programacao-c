#include <stdio.h>

int main(void) {

    FILE *arquivo;
    int numero;
    int caractere;
    int i;

    arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    for (i = 1; i <= 5; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        fprintf(arquivo, "%d\n", numero);
    }

    if (fclose(arquivo) != 0) {
        perror("Erro ao salvar os dados");
        return 1;
    }

    printf("\nNumeros gravados com sucesso em numeros.txt!\n");

    arquivo = fopen("numeros.txt", "r");

    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo para leitura");
        return 1;
    }

    printf("\n===== NUMEROS ARMAZENADOS =====\n");

    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caractere);
    }

    fclose(arquivo);

    return 0;
}
