#include <stdio.h>
#include <locale.h>

#define PI 3.14

float circo(float x);

int main() {
    float raio;
    float result;
    setlocale(LC_ALL, "portuguese");
    printf("Qual o raio da circunferência: ");
    scanf("%f", &raio);
    result = circo(raio);
    printf("a circunferência é: %.2f\n", result);
    return 0;
}

float circo(float x) {
    float circoferencia = PI * (x * x);
    return(circoferencia);
}
