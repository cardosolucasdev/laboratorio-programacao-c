#include <stdio.h>
#include <string.h>

int num;
int resultado = 1;

int calcularFatorial(){
    for (int i = 1; i <= num; i++){
    resultado = resultado * i;
    }
}

int main()
{
  
int calcularFatorial();
  
printf("Digite um numero: ");
scanf("%d", &num);    

calcularFatorial();

printf("Fatorial de %d = %d", num, resultado);

return 0;

}

