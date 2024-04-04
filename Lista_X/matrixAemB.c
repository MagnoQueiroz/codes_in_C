#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int A[4][2], B[4][2], x = 1;
    int k;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite o %dº número ", x++);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    printf("Matrix A\n");
    //repetição
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("|");

            printf("  %d  ", A[i][j]);
        }
        printf("|\n");
    }
    //fim repetição
    printf("\n");
    printf("MATRIX B\n");
    for (int i = 0; i < 4; i++) {
        k = 1;
        for (int j = 0; j < 2; j++) {
            B[i][j] = A[3-i][1-j];
            printf("|");
            printf("  %d  ", B[i][j]);
            k--;
        }
        printf("|\n");
    }
    return (0);
}