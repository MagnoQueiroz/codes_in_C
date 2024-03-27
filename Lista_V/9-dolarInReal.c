#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float cotDola, real, resultConvert;

    printf("Digite a contação do Dólar: ");
    scanf("%f", &cotDola);
    printf("Quanto reais você deseja converter: ");
    scanf("%f", &real);

    resultConvert =  real / cotDola;
    printf("O Valor dessa conversão é $%.2f", resultConvert);
    return(0);
}
