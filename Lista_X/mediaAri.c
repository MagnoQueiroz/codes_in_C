#include <stdio.h>

int main() {
    // linha coluna
    float mediaAri, media[5][3];
    char name[5][30];

    printf("Sistema de notas\n");
    for (int i =0; i < 5; i++) {
        printf("digite o nome do %dº aluno: ", (i+1));
        fgets(name[i], 30, stdin);

        printf("%s", name[i]);
        for (int j = 0; j < 3; j++) {
            printf("%dº nota: ",j+1);
            scanf("%f%*c", &media[i][j]);
        }
    }
    for (int i = 0; i<5; i++) {
        for(int j = 0; j <3; j++) {
            mediaAri = (media[i][0] + media[i][1] + media[i][2])/3;
        }
        printf("%s tem a média aritmética de %.2f", name[i] ,mediaAri);

        printf("\n");
    }
    return(0);
}
