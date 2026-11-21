#include <string.h>
#include <stdio.h>

// Colunas da matriz fatores:

// 0 idade        1 pressao       2 tabagismo     3 diabetes
// 4 historico  5 LDL          6 peso          7 altura
// 8 sedentarismo  9 ultraprocessados  10 estresse  11 sono 12 sexo masculino

char nome[5][50];
float imc[5];
float fatores[5][13];

int calcularPontuacao(int i)
{
    int pontos = 0;

        
    if (fatores[i][0] >= 65) {
        pontos += 3;
    }
    if(fatores[i][1] >= 160){
        pontos += 3;
    }
    if(fatores[i][2] == 1){
        pontos += 3;
    }
    
    
    
    if (fatores[i][3] == 1) {
        pontos += 2;
    }
    if(fatores[i][4] == 1){
        pontos += 2;
    }
    if(fatores[i][5] >= 160){
        pontos += 2;
    }
    if(imc[i] >= 30){
        pontos += 2;
    }


    
    if (fatores[i][8] == 1) {
        pontos += 1;
    }
    if(fatores[i][9] == 1){
        pontos += 1;
    }
    if(fatores[i][10] == 1){
        pontos += 1;
    }
    if(fatores[i][11] == 1){
        pontos += 1;
    }
    if(fatores[i][12] == 1){
        pontos += 1;
    }


    return pontos;
}

void mostrarClassificacao(int pontos)
{
    if (pontos <= 4) {
        printf("Classificacao: Menor de 10%%\n");
    }
    else if (pontos <= 9) {
        printf("Classificacao: Entre 10%% e 20%%\n");
    }
    else if (pontos <= 14) {
        printf("Classificacao: Entre 20%% e 30%%\n");
    }
    else if (pontos <= 18) {
        printf("Classificacao: Entre 30%% e 50%%\n");
    }
    else {
        printf("Classificacao: Acima de 50%%\n");
    }
    
    
}


int main()
{
    
 int qtd;
    do {
        printf("Quantidade de pacientes (1 a 5): ");
        scanf("%d", &qtd);
    } while (qtd < 1 || qtd > 5);

    for (int i = 0; i < qtd; i++) {
    

    printf("Informe o nome do paciente: ");
    scanf(" %49[^\n]", nome[i]);
    
    printf("Informe a idade do paciente: ");
    scanf("%f", &fatores[i][0]);
    
    printf("Informe a pressão arterial sistólica do paciente: ");
    scanf("%f", &fatores[i][1]);
    
    printf("Informe se o paciente é fumante (1-sim ou 0-não): ");
    scanf("%f", &fatores[i][2]);
    
    printf("Informe se o paciente possui diabetes (1-sim ou 0-não): ");
    scanf("%f", &fatores[i][3]);
    
    printf("Informe se o paciente possui histórico de doenças cardiovásculares(1-sim ou 0-não): ");
    scanf("%f", &fatores[i][4]);
    
    printf("Informe o colesterol LDL do paciente: ");
    scanf("%f", &fatores[i][5]);
    
    printf("Informe o peso do paciente: ");
    scanf("%f", &fatores[i][6]);
    
    printf("Informe a altura do paciente: ");
    scanf("%f", &fatores[i][7]);
    
    printf("Informe se o paciente é sedentário (1-sim ou 0-não): ");
    scanf("%f", &fatores[i][8]);
    
    printf("Informe se a alimentação do paciente é rica em ultraprocessados (1-sim ou 0-não): ");
    scanf("%f", &fatores[i][9]);
    
    printf("Informe se o paciente possui estresse crônico elevado (1-sim ou 0-não): ");
    scanf("%f", &fatores[i][10]);
    
    printf("Informe se o paciente possui sono inadequado (1-sim ou 0-não): ");
    scanf("%f", &fatores[i][11]);
    
    printf("Informe o sexo do paciente(1-M ou 0-F): ");
    scanf("%f", &fatores[i][12]);
    
    
    imc[i] = fatores[i][6] / (fatores[i][7] * fatores[i][7]);
    
    }
    
    printf("\n========================================\n");
    printf("   SISTEMA DE ANALISE DE RISCO\n");
    printf("========================================\n\n");
    printf("Quantidade de pacientes: %d\n\n", qtd);
    
    for (int i = 0; i < qtd; i++) {
        printf("Paciente %d: %s\n", i + 1, nome[i]);
    }

    printf("\n========================================\n");
    printf("   RELATORIO DE RISCO\n");
    printf("========================================\n\n");

    for (int i = 0; i < qtd; i++) {
        printf("Paciente: %s\n", nome[i]);
        mostrarClassificacao(calcularPontuacao(i));
        printf("\n");
    }
    


    return 0;
}
