#include <stdio.h>

int main(void) {

    FILE *arquivo;
    char nome[50];
    int matricula;
    int quantidade;
    int i;

    do {
        printf("Quantos funcionarios deseja cadastrar (1 a 5)? ");
        scanf("%d", &quantidade);

        if (quantidade < 1 || quantidade > 5) {
            printf("Quantidade invalida! Digite um valor entre 1 e 5.\n");
        }
    } while (quantidade < 1 || quantidade > 5);

    arquivo = fopen("funcionarios.txt", "a");

    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    for (i = 1; i <= quantidade; i++) {
        printf("\n--- Funcionario %d de %d ---\n", i, quantidade);

        printf("Nome: ");
        scanf(" %49[^\n]", nome);

        printf("Matricula: ");
        scanf("%d", &matricula);

        fprintf(arquivo, "Funcionario: %s\n", nome);
        fprintf(arquivo, "Matricula: %d\n", matricula);
        fprintf(arquivo, "----------------------------------------\n");
    }

    if (fclose(arquivo) != 0) {
        perror("Erro ao salvar os dados");
        return 1;
    }

    printf("\nFuncionários cadastrados com sucesso!\n");

    return 0;
}
