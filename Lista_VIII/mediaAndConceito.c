#include <stdio.h>
#include <locale.h>

float media(float n1, float n2, float n3);
void conceito(float media);
int main()
{
    float n1, n2, n3;
    printf("Digite 1º media: ");
    scanf("%f", &n1);
    printf("Digite 2º media: ");
    scanf("%f", &n2);
    printf("Digite 3º media: ");
    scanf("%f", &n3);

    conceito(media(n1, n2, n3));

    return (0);
}

float media(float n1, float n2, float n3)
{
    float media = (n1 + n2 + n3) / 3;

    return (media);
}

void conceito(float media)
{
    if (media >= 9)
    {
        printf("CONCEITO A");
    }
    else if (media >= 7 && media < 9)
    {
        printf("CONCEITO B");
    }
    else if (media >= 6 && media < 7)
    {
        printf("CONCEITO C");
    }
    else if (media >= 4 && media < 6)
    {
        printf("CONCEITO D");
    }
    else
    {
        printf("CONCEITO E");
    }
}