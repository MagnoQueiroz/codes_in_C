#include <stdio.h>

int main()
{
    float a, b, c;
    int i, val = 1;
    float media;

    printf(" ________________________\n");
    printf("|   MEDIA   |  CONCEITO  |\n");
    printf("|    >9     |     A      |\n");
    printf("| >=7 e <9  |     B      |\n");
    printf("| >=6 e <7  |     C      |\n");
    printf("| >=4 e <6  |     D      |\n");
    printf("|    <4     |     E      |\n");
    printf("|________________________|\n");

    for (i = 1; i <= 10; i++)
    {
        while (val == 1)
        {
            printf("Digite sua 1ª nota: ");
            scanf("%f", &a);
            printf("Digite sua 2ª nota: ");
            scanf("%f", &b);
            printf("Digite sua 3ª nota: ");
            scanf("%f", &c);

            if (a > 10 || b > 10 || c > 10)
            {
                printf("digite um formato valido\n");
            }
            else
            {
                val = 0;
            }
        }
        media = (a + b + c) / 3;

        if (media >= 9)
        {
            printf("sua media foi %.2f logo seu conceito é A\n", media);
        }
        else if (media >= 7 && media < 9)
        {
            printf("sua media foi %.2f logo seu conceito é B\n", media);
        }
        else if (media >= 6 && media < 7)
        {
            printf("sua media foi %.2f logo seu conceito é C\n", media);
        }
        else if (media >= 4 && media < 6)
        {
            printf("sua media foi %.2f logo seu conceito D\n", media);
        }
        else
        {
            printf("sua media foi %.2f logo seu conceito foi E\n", media);
        }
    }
}