#include <stdio.h>
#include <locale.h>

int main() {
    int idade, cont;
    cont = 1;
    while (cont <= 10) {
        printf("digite a idade da 1ª pessoa: ");
        scanf("%d", &idade);

        if(idade >= 18) {
            printf("essa pessoa é maior de idade\n");

        } else {
            printf("essa pessoa é menor de idade\n");
        }
        cont++;
    }
    return (0);
}