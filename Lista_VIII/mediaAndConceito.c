#include <stdio.h>
#include <locale.h>

float media(float n1, float n2, float n3);
void conceito(float media);
int main(){
    setlocale(LC_ALL, "portuguese");

    float n1, n2, n3;
    printf("Digite 1º Média: ");
    scanf("%f", &n1);
    printf("Digite 2º Média: ");
    scanf("%f", &n2);
    printf("Digite 3º Média: ");
    scanf("%f", &n3);
    printf("Médias e conceito abaixo:\n");
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
        printf("MÉDIA: %.2f\nCONCEITO: A\n", media);
    }
    else if (media >= 7 && media < 9)
    {
        printf("MÉDIA: %.2f\nCONCEITO: B\n", media);
    }
    else if (media >= 6 && media < 7)
    {
        printf("MÉDIA: %.2f\nCONCEITO: C\n", media);
    }
    else if (media >= 4 && media < 6)
    {
        printf("MÉDIA: %.2f\nCONCEITO: D\n", media);
    }
    else
    {
        printf("MÉDIA: %.2f\nCONCEITO: E\n", media);
    }

}