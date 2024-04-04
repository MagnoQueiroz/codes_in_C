#include <stdio.h>

int main() {
    int x, y;
    int A[x][y], B[x][y];

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &x);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &y);

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            printf("Digite o %d de A: ", c++);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matrix B\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            B[i][j] = A[i][j] *3;

            printf("| %d ", B[i][j]);
        }
        printf("|\n");
    }

}

