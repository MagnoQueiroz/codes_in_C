#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int deno, nume;
    deno = 0;
    
    printf("Insira o numerador: ");
    scanf("%d", &nume);

    while(deno == 0) {
        printf("Insira o denominador:" );
        scanf("%d", &deno);

        if(deno == 0) {
            printf("Insira o numero diferente de 0 \n");
        }
    }

    if(nume%deno == 0) {
        printf("é divisível \n");
    } else {
        printf("nao é divisível \n");
    }

    return (0);
}