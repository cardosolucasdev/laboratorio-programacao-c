#include <stdio.h>
#include <string.h>

int quantidade;
int dobrado;

void dobro(int quantidade){
    dobrado = quantidade * 2;
}


int main()
{
printf("Digite a quantidade: ");
scanf("%d", &quantidade);

dobro(quantidade);

printf("Quantidade inicial: %d\n\n", quantidade);
printf("Quantidade dobrada: %d",dobrado);



}
