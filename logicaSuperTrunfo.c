#include <stdio.h>
#include <string.h> // Para usar strcmp



int main() {
  
    int codigoA, codigoB;
    char nomeA[100], nomeB[100];
    long long populacaoA, populacaoB;
    float areaA, areaB;
    double pibA, pibB;
    int pontos_turisticosA, pontos_turisticosB;
    

    
    // Cidade A
    printf("--- Cidade A ---\n");
    printf("Digite o código da cidade A: ");
    scanf("%d", &codigoA);
    printf("Digite o nome da cidade A: ");
    scanf(" %[^\n]", nomeA);
    printf("Digite a população da cidade A: ");
    scanf("%lld", &populacaoA);
    printf("Digite a área da cidade A (em km²): ");
    scanf("%f", &areaA);
    printf("Digite o PIB da cidade A (em milhões de reais): ");
    scanf("%lf", &pibA);
    printf("Digite o número de pontos turísticos da cidade A: ");
    scanf("%d", &pontos_turisticosA);

    // Cidade B
    printf("\n--- Cidade B ---\n");
    printf("Digite o código da cidade B: ");
    scanf("%d", &codigoB);
    printf("Digite o nome da cidade B: ");
    scanf(" %[^\n]", nomeB);
    printf("Digite a população da cidade B: ");
    scanf("%lld", &populacaoB);
    printf("Digite a área da cidade B (em km²): ");
    scanf("%f", &areaB);
    printf("Digite o PIB da cidade B (em milhões de reais): ");
    scanf("%lf", &pibB);
    printf("Digite o número de pontos turísticos da cidade B: ");
    scanf("%d", &pontos_turisticosB);

   
    
    printf("\n--- Comparação ---\n");
    if (populacaoA > populacaoB) {
        printf("Cidade A tem maior população.\n");
    } else if (populacaoA < populacaoB) {
        printf("Cidade B tem maior população.\n");
    } else {
        printf("Cidades A e B têm a mesma população.\n");
    }

    if (areaA > areaB) {
        printf("Cidade A tem maior área.\n");
    } else if (areaA < areaB) {
        printf("Cidade B tem maior área.\n");
    } else {
        printf("Cidades A e B têm a mesma área.\n");
    }

    if (pibA > pibB) {
        printf("Cidade A tem maior PIB.\n");
    } else if (pibA < pibB) {
        printf("Cidade B tem maior PIB.\n");
    } else {
        printf("Cidades A e B têm o mesmo PIB.\n");
    }

    if (pontos_turisticosA > pontos_turisticosB) {
        printf("Cidade A tem mais pontos turísticos.\n");
    } else if (pontos_turisticosA < pontos_turisticosB) {
        printf("Cidade B tem mais pontos turísticos.\n");
    } else {
        printf("Cidades A e B têm o mesmo número de pontos turísticos.\n");
    }
    
    int comparacaoNomes = strcmp(nomeA, nomeB);
    if(comparacaoNomes == 0){
        printf("Cidades A e B têm o mesmo nome.\n");
    } else {
        printf("Cidades A e B têm nomes diferentes.\n");
    }

 
    char cidadeVencedora[100];
    if (populacaoA > populacaoB) {
        strcpy(cidadeVencedora, nomeA);
    } else {
        strcpy(cidadeVencedora, nomeB);
    }
    printf("\nA cidade vencedora (baseado na população) é: %s\n", cidadeVencedora);

    return 0;
}
