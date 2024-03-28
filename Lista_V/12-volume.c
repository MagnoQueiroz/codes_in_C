#include <stdio.h>

int main() {
    float comp,lag, alt, volume;

    printf("Digite o comprimento da caixa: ");
    scanf("%f",&comp);

    printf("Digite a largura da caixa: ");
    scanf("%f",&lag);

    printf("Digite a Altura da caixa: ");
    scanf("%f", &alt);

    volume = comp*lag*alt;

    printf("O volume da caixa retangular é: %.2f", volume);
    return(0);

}
