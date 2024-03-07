#include <stdio.h>

int main()
{
    int i, f, j = 1;

    printf("Digite um numero que você quer saber o fatorial: ");
    scanf("%d", &f);

    if (f >= 0)
    {
        for (i = 1; i <= f; i++)
        {
            j *= i;
        }
        printf("%d! = %d\n", f, j);
    }
    else
    {
        printf("Não existe fatorial de número negativo.");
    }

}