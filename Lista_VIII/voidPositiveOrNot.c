#include <stdio.h>
#include <locale.h>

void positiveOrNot(int num);

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;
    printf("Digite um numero:");
    scanf("%d", &num);

    positiveOrNot(num);

    return 0;
}

void positiveOrNot(int num)
{
    if (num > 0)
    {
        printf("é positivo");
    }
    else if (num < 0)
    {
        printf("é negativo");
    }
    else
    {
        printf("é neutro");
    }
}