#include <stdio.h>
#include <string.h>

int main()
{

char nome_produto [50];
char categoria[25];
char confirmacao[40];
char cateFinal[25];

printf("Digite o nome do produto: ");
scanf("%49s",nome_produto);

printf("Digite a categoria (HARDWARE ou PERIFERICO): ");
scanf("%25s",categoria);

int tamanho = strlen(nome_produto);

strcpy(confirmacao, nome_produto);

if (strcmp(categoria, "HARDWARE") == 0){
    strcpy(cateFinal, "HARDWARE");
}

else if (strcmp(categoria, "PERIFERICO") == 0){
    strcpy(cateFinal, "PERIFERICO");
}

else{
    printf("Inválido.\n");
    return 0;
}
    
    
printf ("===== RESUMO =====\n");
printf("Produto: %s\n", nome_produto);
printf("Caracteres: %d\n", tamanho);
printf("Categoria: %s\n", cateFinal);

char msg[120] = "Descrição: ";

strcat(msg, "Produto: ");
strcat(msg, nome_produto);
strcat(msg, "\n");
strcat(msg, "Cadastro concluido");
strcat(msg, "!");

printf(msg);


return 0;
}
