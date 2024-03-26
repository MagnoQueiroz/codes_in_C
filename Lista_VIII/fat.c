#include <stdio.h>
#include <locale.h>

int fat(int num);

int main()
{
    int num, fate;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Error");
        }
    } while (num < 0);

    fate = fat(num);
    printf("%d! = %d\n", num, fate);
}

int fat(int num)
{
    int j, fat = 1;

    for (j = 1; j <= num; j++)
    {
        fat *= j;
    }
    return fat;
}