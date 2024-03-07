#include <stdio.h>
#include <math.h>

int main()
{
    int op = 0;
    float x, y, result;
    int veri = 1;

    printf(" ___________________________\n");
    printf("| Opções  |    Operações    |\n");
    printf("|---------------------------|\n");
    printf("|   1     |     ADIÇÃO      |\n");
    printf("|   2     |    SUBTRAÇÃO    |\n");
    printf("|   3     |  MULTIPLICAÇÃO  |\n");
    printf("|   4     |    DIVISÃO      |\n");
    printf("|   5     |   POTENCIA      |\n");
    printf("|   6     |     RAIZ        |\n");
    printf("|___________________________|\n");
    printf("Escolha: ");
    scanf("%d", &op);
    printf("|===========================|\n");

    if(!(op == 6)) {
        printf("Digite o primeiro valores: ");
        scanf("%f", &x);
        printf("Digite o segundo valor: ");
        scanf("%f", &y);
    } else {
        printf("Digite o primeiro valor:");
        scanf("%f", &x);

    }
    switch (op)
    {
    case 1:
        result = x + y;
        break;
    case 2:
        result = x - y;
        break;
    case 3:
        result = x * y;
        break;
    case 4:
        result = x / y;

        if (y == 0)
        {
            printf("Sua divisão nao e possível!!!\n");
            veri = 0;
        }
        break;
    case 5:
        result = pow(x, y);
        break;
    case 6:
        result = sqrt(x);
    default:
        printf("escolha uma operação valida");
        break;
    }
    // Gambiarra de verificação de valores para caso a divisão for por 0.
    if (veri == 1)
    {
        printf("o resultado da operação selecionada e: %.2f \n", result);
    }

    return (0);
}