#include <stdio.h>
#include <math.h>

int main()
{
    double x, po;

    printf("Digite um numero que você deseja saber o cubo: ");
    scanf("%lf", &x);

    po = pow(x, 3);

    printf("O cubo é: %.2lf\n", po);
}