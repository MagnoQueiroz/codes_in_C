#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int quanti;
    float val;

    printf("insira a quantidade de maças desejada: ");
    scanf("%d", &quanti);

    if(quanti >= 12) {
        val = quanti * 1.10;

    }
    else {
        val = quanti * 1.30;
    }

    printf("O valor a ser pago é: %.2f \n", val);

    return (0);
}