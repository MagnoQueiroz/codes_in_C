#include <stdio.h>

int main() {
    int i, v[5];

    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    int m = v[0];
    for (i = 1; i < 5; i++) {
        if (v[i] > m) {
            m = v[i];
        }
    }

    printf("O maior número disponível no vetor é %d", m);

    return (0);
}