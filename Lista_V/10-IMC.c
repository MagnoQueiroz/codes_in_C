#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float peso, altura, imc;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (altura >= 100) {
        altura /= 100;
        printf("sua altura foi convertida para %.2f\n", altura);
    }
    printf("Digite seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);
    printf("Seu imc é: %.2f", imc);

    return (0);
}
