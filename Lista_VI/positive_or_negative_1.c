#include <stdio.h>

int main() {
    int num = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num > 0) {
        printf("%d é positivo. pois é maior que zero.", num);

    }
    else if(num < 0) {
        printf("%d  é negativo, pois é menor que zero.", num);
    }
    else {
        printf("0 é neutro");
    }

    return (0);
}
