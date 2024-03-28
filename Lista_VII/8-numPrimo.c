#include <stdio.h>

int main() {
    int x, y, z, valor;

    do {
        printf("Digite o 1º numero: ");
        scanf("%d", &x);
        printf("Digite o 2º numero: ");
        scanf("%d", &y);

        if (x > y) {
            printf("o 1º numero nao pode ser maior que o 2º\n");
        }

    } while (x > y);

    printf("primos entre %d e %d", x, y);

    while (x <= y) {
        valor = 0; // precisa ficar dentro do while para atualizar!

        for (z = 1; z <= x; z++) {
            if (x % z == 0) {
                valor += 1;
            }
        }

        if (valor == 2) {
            printf("%d\n", x);
        }
        x++;
    }
    return (0);
}