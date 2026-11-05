#include <stdio.h>

float precoMaior;
float p1;
float p2;


void maiorPreco(float p1, float p2){
    if(p1 > p2){
        precoMaior = p1;
    }
    else{
        precoMaior = p2;
    }
}


int main()
{
printf("Informe o primeiro preço: ");
scanf("%f", &p1);

printf("Informe o segundo preço: ");
scanf("%f", &p2);

maiorPreco(p1, p2);

printf("Preço 1: %.2f\n", p1);
printf("Preço 2: %.2f\n", p2);
printf("Maior preço: %.2f", precoMaior);

    return 0;
}
