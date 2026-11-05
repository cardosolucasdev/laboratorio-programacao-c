#include <stdio.h>
#include <string.h>

int num;
int resultado = -1;

void verificarPar(int num){
    if(num % 2 == 0){
        resultado = 1;
    }
    else{
        resultado = 0;        
    }
}


int main()
{
printf("Digite um numero inteiro: ");
scanf("%d", &num);

verificarPar(num);

if(resultado = 1){
    printf("O numero %d é par", num);
}

else{
    printf("O numero %d é ímpar", num);
}

}
