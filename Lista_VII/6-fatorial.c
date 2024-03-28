#include <stdio.h>
#include <locale.h>

int main() {
    //j=1, poís o fatorial de 0 é 1.
    int i, f, j = 1;
    setlocale(LC_ALL, "portuguese");
    printf("Digite um número que você quer saber o fatorial: ");
    scanf("%d", &f);

    if (f >= 0) {
        for (i = 1; i <= f; i++) {
            j *= i;
        }
        printf("%d! = %d\n", f, j);
    } else {
        printf("Não existe fatorial de número negativo.");
    }
    return (0);
}