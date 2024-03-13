#include <stdio.h>

int main()
{
    float lag, comp, pre, calcPre, areaT;
    printf("Digite a largura do terreno: ");
    scanf("%f", &lag);
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comp);
    printf("Digite o preço do metro quadrado: ");
    scanf("%f", &pre);

    areaT = lag * comp;

    calcPre = areaT * pre;
    printf("Largura do terreno: %.1f\n", lag);
    printf("Comprimento do terreno: %.1f\n", comp);
    printf("O valor do metro do terreno: %.2f;\nPreço do terreno: %.2f;\n", areaT, calcPre);

    return (0);
}