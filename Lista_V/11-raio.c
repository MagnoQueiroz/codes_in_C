#include <stdio.h>
#define PI 3.14
int main() {
    float areaCirco, raio;
    printf("Digite o valor do raio para calcular a circunferência: ");
    scanf("%f", &raio);
    areaCirco = PI * (raio * raio);

    printf("À área da circunferência é: %.2f\n",areaCirco);
    return (0);
}