#include <stdio.h>

int main()
{
    int numeros[3][4] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };
    
    int somaOcupa = 0;
    int somaDisp = 0;

    for (int i = 0;i<3;i++){
       for (int j = 0;j<4;j++){
           if (numeros[i][j] == 0){
               somaDisp++;
           }
           else{
               somaOcupa++;
           }
       }
    }
    
    printf("Poltronas disponíveis: %d\n",somaDisp);
    printf("Poltronas ocupadas: %d\n",somaOcupa);
    return 0;
}
