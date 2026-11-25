#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

float diferencaSalario(float salario1, float salario2) {
    float diferenca;

    if (salario1 > salario2) {
        diferenca = salario1 - salario2;
    }
    else {
        diferenca = salario2 - salario1;

        if (salario1 == salario2) {
            printf("Os dois funcionarios recebem o mesmo salario!\n");
        }
    }

    return diferenca;
}

int main() {
    Funcionario f1, f2;

    printf("========== CADASTRO ==========\n");

    printf("\nFuncionario 1\n");

    printf("Nome: ");
    scanf(" %49s", f1.nome);

    printf("Idade: ");
    scanf("%d", &f1.idade);

    printf("Salario: ");
    scanf("%f", &f1.salario);

    printf("\nFuncionario 2\n");

    printf("Nome: ");
    scanf(" %49s", f2.nome);

    printf("Idade: ");
    scanf("%d", &f2.idade);

    printf("Salario: ");
    scanf("%f", &f2.salario);

    printf("\n========== DADOS CADASTRADOS ==========\n");

    printf("\nFuncionario 1\n");
    printf("Nome: %s\n", f1.nome);
    printf("Idade: %d\n", f1.idade);
    printf("Salario: %.2f\n", f1.salario);

    printf("\nFuncionario 2\n");
    printf("Nome: %s\n", f2.nome);
    printf("Idade: %d\n", f2.idade);
    printf("Salario: %.2f\n", f2.salario);

    printf("\nDiferenca salarial: %.2f\n",
           diferencaSalario(f1.salario, f2.salario));

    return 0;
}
