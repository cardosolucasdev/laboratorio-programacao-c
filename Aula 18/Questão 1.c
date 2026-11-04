#include <stdio.h>

void exibirMenu(){
    printf("==== CALCULADORA ====\n\n");
    printf("1 - SOMAR\n");
    printf("2 - SUBTRAIR\n");
    printf("3 - MULTIPLICAR\n");
    printf("4 - DIVIDIR\n");
    printf("0 - SAIR\n\n");
}

float soma(float a, float b){
    return a + b;
}

float subtrair(float a, float b){
    return a - b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){
    return a / b;
}

int opcao = -1;
float num1;
float num2;
float resultado;

int main()
{
    
    while (opcao != 0){
    exibirMenu();
    
    printf("Escolha uma das opções: ");
    scanf("%d",&opcao);
    
    if (opcao >= 1 && opcao <= 4){
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    }
    
    
    switch (opcao){
        case 1:
        printf("Resultado: %.2f\n\n", soma(num1, num2));
        break;
        
        case 2:
        printf("Resultado: %.2f\n\n", subtrair(num1, num2));
        break;
        
        case 3:
        printf("Resultado: %.2f\n\n", multiplicar(num1, num2));
        break;
        
        case 4:
        if(num2 != 0){
        printf("Resultado: %.2f\n\n", dividir(num1, num2));
        }
        
        else{
        printf("ERRO: Impossível dividir por zero");
        }
        
        break;
        
        case 0:
        printf("Calculadora encerrada: "); 
        break;
        
        default:
        printf("Opcao invalida!");
        break;
    }
    
}
    return 0;
}
