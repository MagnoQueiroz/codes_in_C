#include <stdio.h>
#include <math.h>
int main()
{
    float baseRe, altRe, area, peri, diago;
    printf("Digite a base do retangulo: ");
    scanf("%f", &baseRe);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altRe);

    area = baseRe * altRe;

    //perimetro = soma dos quatro lados
    peri = ((baseRe * 2)) + (altRe* 2);

    diago = (pow(baseRe, 2)) + (pow(altRe, 2));
    diago = sqrt(diago);

    printf("Area = %.4f\n", area);
    printf("Perimetro = %.4f\n", peri);
    printf("Diagonal = %.4f\n", diago);

    return 0;
}