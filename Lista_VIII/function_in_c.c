#include <stdio.h>
#include <locale.h>
// protótipo
void zeroOrNot(int num);

int main()
{
    int num;
    setlocale(LC_ALL, "portuguese");
    printf("digite um numero para verificação: ");
    // argumento
    scanf("%d", &num);
    zeroOrNot(num);
}

// parâmetro
void zeroOrNot(int num)
{
    if (num != 0)
    {
        printf("%d é diferente de zero", num);
    }
    else
    {
        printf("%d é igual a zero", num);
    }
    return (0);
}