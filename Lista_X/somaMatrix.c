#include <stdio.h>

int main() {
    // linha coluna
    int a[2][3];
    int b[2][3];
    int result[2][3];
    int j, i;

    printf("Preencha a matrix A\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matrix A Linha %d coluna %d: ", (i + 1), j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\nPreencha a matrix B\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Matrix B Linha %d coluna %d: ", (i + 1), j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n\nResultado\n");
    for (i = 0; i < 2; i++) {

        for (j = 0; j < 3; j++) {
            result[i][j] = a[i][j] + b[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");

    }
    return (0);
}
