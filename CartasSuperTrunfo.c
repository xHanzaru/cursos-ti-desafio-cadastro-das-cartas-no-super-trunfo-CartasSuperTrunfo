#include <stdio.h>

int main() {
    // CARTA 1
    char Estado1[5], Cidade1[50], Codigo1[50];
    int Populacao1, PontosTuristicos1;
    float Area1, PIB1, Densidade1, PIBpc1, SuperPoder1;

    // CARTA 2
    char Estado2[5], Cidade2[50], Codigo2[50];
    int Populacao2, PontosTuristicos2;
    float Area2, PIB2, Densidade2, PIBpc2, SuperPoder2;

    
    printf("CARTA 01\n");
    printf("Estado: "); scanf("%s", Estado1);
    printf("Cidade: "); scanf("%s", Cidade1);
    printf("Código: "); scanf("%s", Codigo1);
    printf("População: "); scanf("%d", &Populacao1);
    printf("Área: "); scanf("%f", &Area1);
    printf("PIB: "); scanf("%f", &PIB1);
    printf("Pontos turísticos: "); scanf("%d", &PontosTuristicos1);

    Densidade1 = Populacao1 / Area1;
    PIBpc1 = PIB1 / Populacao1;
    SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBpc1 - Densidade1;

   
    printf("\nCARTA 02\n");
    printf("Estado: "); scanf("%s", Estado2);
    printf("Cidade: "); scanf("%s", Cidade2);
    printf("Código: "); scanf("%s", Codigo2);
    printf("População: "); scanf("%d", &Populacao2);
    printf("Área: "); scanf("%f", &Area2);
    printf("PIB: "); scanf("%f", &PIB2);
    printf("Pontos turísticos: "); scanf("%d", &PontosTuristicos2);

    Densidade2 = Populacao2 / Area2;
    PIBpc2 = PIB2 / Populacao2;
    SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBpc2 - Densidade2;

   
    printf("\n--- CARTA 01 ---\n");
    printf("ESTADO: %s\nCIDADE: %s\nCÓDIGO: %s\n", Estado1, Cidade1, Codigo1);
    printf("POPULAÇÃO: %d\nÁREA: %.2f\nPIB: %.2f\nPONTOS TURÍSTICOS: %d\n", Populacao1, Area1, PIB1, PontosTuristicos1);
    printf("DENSIDADE: %.2f\nPIB PER CAPITA: %.2f\nSUPER PODER: %.2f\n", Densidade1, PIBpc1, SuperPoder1);

    printf("\n--- CARTA 02 ---\n");
    printf("ESTADO: %s\nCIDADE: %s\nCÓDIGO: %s\n", Estado2, Cidade2, Codigo2);
    printf("POPULAÇÃO: %d\nÁREA: %.2f\nPIB: %.2f\nPONTOS TURÍSTICOS: %d\n", Populacao2, Area2, PIB2, PontosTuristicos2);
    printf("DENSIDADE: %.2f\nPIB PER CAPITA: %.2f\nSUPER PODER: %.2f\n", Densidade2, PIBpc2, SuperPoder2);

   
    printf("\n*** RESULTADOS ***\n");
    
    int carta1 = 0, carta2 = 0;

     carta1 += (Populacao1 > Populacao2);
     carta2 += (Populacao2 > Populacao1);

    printf("POPULAÇÃO: Carta1: %d - Carta2: %d\n", Populacao1, Populacao2);

    carta1 += (Area1 > Area2);
    carta2 += (Area2 > Area1);

    printf("ÁREA: Carta1: %f - Carta2: %f\n", Area1, Area2);

    carta1 += (PIB1 > PIB2);
    carta2 += (PIB2 > PIB1);

    printf("PIB: Carta1: %f - Carta2: %f\n", PIB1, PIB2);

    carta1 += (PontosTuristicos1 > PontosTuristicos2);
    carta2 += (PontosTuristicos2 > PontosTuristicos1);

    printf("PONTOS TURISTICOS: Carta1: %d - Carta2: %d\n", PontosTuristicos1, PontosTuristicos2);

    carta1 += (Densidade1 < Densidade2);
    carta2 += (Densidade2 < Densidade1);

    printf("DENSIDADE POPULACIONAL: Carta1: %f - Carta2: %f\n", Densidade1, Densidade2);

    carta1 += (PIBpc1 > PIBpc2);
    carta2 += (PIBpc2 > PIBpc1);

    printf("PIB PER CAPITA: Carta1: %f - Carta2: %f\n", PIBpc1, PIBpc2);

    carta1 += (SuperPoder1 > SuperPoder2);
    carta2 += (SuperPoder2 > SuperPoder1);

    printf("SUPER PODER: Carta1: %f - Carta2: %f\n", SuperPoder1, SuperPoder2);

    printf("\nPONTUAÇÃO FINAL:\n");
    printf("CARTA 01: %d pontos\n", carta1);
    printf("CARTA 02: %d pontos\n", carta2);

    
    char *resultado = (carta1 > carta2) ? "CARTA 01 VENCEU" :
                      (carta2 > carta1) ? "CARTA 02 VENCEU" :
                                            "EMPATE";

    printf("RESULTADO: %s\n", resultado);

    return 0;
}
