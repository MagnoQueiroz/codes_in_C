#include <stdio.h>

/*
Aqui é preciso dois laços de repetição pelo fato de:
1- o primeiro vai percorrer os números de 1 a 11.
2- vai fazer o cálculo do fatorial em si, ele começa com 1 e vai até o número em questão do laço. Precisa ter a variável fat=1 dentro do laço para que quando ela entre de novo no laço ela volte o valor de fat.

 Caso seja feito com o salto 1, você precisa fazer um if de verificação.

*/
int main() {
    int num, fat, j;

    for (num = 1; num <= 11; num += 2) {
        fat = 1;

        for (j = 1; j <= num; j++) {
            fat *= j;
        }

        printf("fatorial de %d!=%d\n", num, fat);
    }
    return (0);
}

/*
if(!(num%2==0)){
for (j = 1; j <= num; j++) {
fat *= j;
}
printf("fatorial de %d!=%d\n", num, fat);
}*/
