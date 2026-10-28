#include <stdio.h>

int main()
{
    int numeros[2][2] = {
        {20,40},
        {16,60}
};

for (int i = 0; i < 2; i++){
    for (int j = 0; j < 2; j++){
        printf("%d ",numeros[i][j]);
    }
    printf("\n");
} 

    return 0;
}
