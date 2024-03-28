#include <stdio.h>
#include <locale.h>

int main() {
    float a, b, c, mp, af, mf;

    printf("Digite sua primeira nota: ");
    scanf("%f", &a);
    printf("Digite sua segunda nota: ");
    scanf("%f", &b);
    printf("Digite sua terceira nota: ");
    scanf("%f", &c);

    mp = (a + b + c) / 3;
    if(mp >= 7) {
        printf("Parabéns voce passou com media(MP): %.2f\n", mp);

    }
    else if (mp >= 3.5 && mp <= 7) {
        printf("Você precisará fazer a avaliação final pois sua media(MP) é : %.2f\n", mp);

        printf("Digite a nota de sua avaliação final: ");
        scanf("%f", &af);

        mf = ((mp * 6) + (af * 4)) / 10;

        if(mf >= 5) {
            printf("Você passou com media: %.2f\n", mf);
        } else {
            printf("Você Reprovou definitivamente, pois sua media(MF): %.2f\n", mf);
        }

    } else{
        printf("Você reprovou. Não poderá fazer a avaliação final, pois sua media(MP) é : %.2f\n", mp);
    }

}