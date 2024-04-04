#include <stdio.h>

int main() {
    int  i,j,x, y;

    int z, c = 1;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &x);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &y);

    int B[x][y];
    int A[x][y];

    for(i=0; i<x; i++) {
        for(j=0; j<y; j++) {
            printf("Digite o %dº numero: ", c++);
            scanf("%d",&A[i][j]);

        }
    }
    printf("Matrix A\n");
    for(i=0; i<x; i++) {
        for (j = 0; j <y ; j++) {
            printf(" %d ", A[i][j]);

        }printf("\n");
    }
    printf("Matrix B\n");
    for (i=0; i<x; i++) {
        for (j=0; j <y; j++) {
            z = A[i][j] * 3;
            B[i][j] = z;
            printf(" %d ", B[i][j]);
        }
        printf("\n");
    }
}

