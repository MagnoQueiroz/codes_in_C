#include <stdio.h>

int main() {
    int ano, calculo, idade;
    ano = 365;
    printf("Digite sua idade para saber quantos dias de vida vc possui: ");
    scanf("%d", &idade);

    calculo = idade * ano;

    printf("voce viveu aproximadamente %d\n", calculo);

    return (0);
}