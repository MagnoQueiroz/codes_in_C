#include <stdio.h>
/*aqui é preciso dois laços de repetição pelo fato de:
1- o primeiro vai percorrer os números de 1 a 11.
2- vai fazer o calculo do fatorial em si, ele começa com 1 e vai até o numero em questão do laço. precisa ter a variável fat=1 dentro do laço para que quando ela entre de novo no laço ela volte o valor de fat.

notas: caso aja um if ele tem que para tirar os numeros pares.|| o print tem que está fora do for para ele nao mostrar todo o processo, apenas o final dele.
*/
int main()
{
    int num, fat, j;

    for (num = 1; num <= 11; num = num + 2)
    {

        fat = 1;
        for (j = 1; j <= num; j++)
        {
            fat *= j;
        }
        printf("fatorial de %d!=%d\n",num, fat);
    }
    return (0);
}