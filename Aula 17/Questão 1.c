#include <stdio.h>
#include <string.h>

int main()
{

char nome [50];
char perfil[25];
char confirmacao[40];
char perfilFinal[25];

printf("Digite seu nome: ");
scanf("%49s",nome);

printf("Digite seu perfil (ADMIN ou COMUM): ");
scanf("%25s",perfil);

int tamanho = strlen(nome);

strcpy(confirmacao, nome);

if (strcmp(perfil, "ADMIN") == 0){
    strcpy(perfilFinal, "ADMIN");
}

else if (strcmp(perfil, "COMUM") == 0){
    strcpy(perfilFinal, "COMUM");
}

else{
    printf("Perfil inválido.\n");
    return 0;
}
    
    
printf ("===== DADOS CADASTRADOS =====\n");
printf("Nome: %s\n", nome);
printf("Quantidade de caracteres: %d\n", tamanho);
printf("Perfil: %s\n", perfilFinal);

char msg[120] = "Bem-vindo(a), ";

strcat(msg, nome);
strcat(msg, "!\n");
strcat(msg, "Cadastro realizado com sucesso");

printf(msg);


return 0;
}
