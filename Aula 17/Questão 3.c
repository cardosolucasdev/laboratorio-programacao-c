#include <stdio.h>
#include <string.h>

int main()
{

char nome [50];
char curso[25];
char confirmacao[50];
char cursoFinal[25];

printf("Digite seu primeiro nome: ");
scanf("%49s",nome);

printf("Digite seu curso (CC ou SI): ");
scanf("%25s",curso);

int tamanho = strlen(nome);

strcpy(confirmacao, nome);

if (strcmp(curso, "CC") == 0){
    strcpy(cursoFinal, "Ciência da Computação");
}

else if (strcmp(curso, "SI") == 0){
    strcpy(cursoFinal, "Sistemas de Informação");
}

else{
    printf("Inválido.\n");
    return 0;
}
    

char msg[120] = "Nome do estudante: ";


return 0;
}
