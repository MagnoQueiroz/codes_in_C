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

    // perímetro = soma dos quatro lados
    peri = ((baseRe * 2)) + (altRe* 2);
    /*
        calculo de diagonal usasse teorema de Pitágoras:
        d2 = b2 + h2 ou d = raiz quadrada de reto b ao quadrado mais reto h ao quadrado fim da raiz[sqrt(pow(baseRe,2) + pow(altRe,2))]
     */
    diago = (pow(baseRe, 2)) + (pow(altRe, 2));
    diago = sqrt(diago);

    printf("Area = %.4f\n", area);
    printf("Perimetro = %.4f\n", peri);
    printf("Diagonal = %.4f\n", diago);

    return 0;
}