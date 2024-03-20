#include <stdio.h>

void parOrImpar(int num);

int main()
{
    int num = 0;

    printf("Write a number: ");
    scanf("%d", &num);

    parOrImpar(num);

    return 0;
}

void parOrImpar(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is par\n", num);
    }
    else
    {
        printf("%d is impar\n", num);
    }
}