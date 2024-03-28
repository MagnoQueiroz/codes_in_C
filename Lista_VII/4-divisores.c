#include <stdio.h>

int main() {
    int cont;

    for (cont = 10; cont <= 50; cont++) {
        if (cont % 2 == 0) {
            printf("Divisível por 2: %d\n", cont);
        }
    }

    return (0);
}