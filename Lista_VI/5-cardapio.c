#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int ped, quant;
    float val;

    quant = 0;

    printf("==========================CARDÁPIO===========================\n");
    printf("|  CÓDIGO DO ITEM   |   ESPECIFICAÇÃO   |   PREÇO UNITÁRIO  |\n");
    printf("|      100          |  Cachorro Quente  |       8.00        |\n");
    printf("|      101          |      Bauru        |       9.00        |\n");
    printf("|      102          |     X-Salada      |       10.00       |\n");
    printf("|      103          |    Hambúrguer     |       12.00       |\n");
    printf("|      104          |   Refrigerante    |       3.00        |\n");
    printf("=============================================================\n");

    printf("Qual o seu pedido: ");
    scanf("%d", &ped);

    while (quant < 1)
    {
        printf("A quantidade: ");
        scanf("%d", &quant);

        if(quant < 1) {
            printf("Insira novamente o valor valido\n");
        }
    }


    switch (ped)
    {
    case 100:
        val = quant * 8.00;
        break;
    case 101:
        val = quant * 9.00;
        break;
    case 102:
        val = quant * 10.00;
        break;
    case 103:
        val = quant * 12.00;
        break;
    case 104:
        val = quant * 3.00;
        break;

    default:
        printf("O valor inserido não é valido\n");
        break;
    }
    //Se o pedido não estiver entre esses valores não mostrará em tela
    if((ped >= 100) && (ped <= 104)) {
        printf("o valor que vc terá que pagar é: %.2f R$\n", val);
    }

    return (0);
}