#include <stdio.h>
#include <locale.h>

void multiploOrNot(int num);

int main() {
    setlocale(LC_ALL, "portuguese");

    int num = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    multiploOrNot(num);

    return 0;
}

void multiploOrNot(int num) {
    if(num%5==0) {
        printf("é múltiplo de 5");
    } else {
        printf("Nao é múltiplo");
    }
}