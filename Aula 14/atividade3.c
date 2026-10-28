#include <stdio.h>

int main()
{
    int numeros[3][3];
    int soma = 0;

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        printf("Digite um numero para [%d][%d]\n", i,j);
        scanf("%d", &numeros[i][j]);
    }
} 

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        printf("%d ",numeros[i][j]);
    }
    printf("\n");
}

for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
    soma = soma + numeros[i][j];
    }
}

printf("soma: %d\n",soma);

return 0;

}
