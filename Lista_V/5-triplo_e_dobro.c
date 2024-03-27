#include <stdio.h>

int main() {
    int numOne, numTwo;

    printf("digite um numero: ");
    scanf("%d", &numOne);
    printf("digite outro numero: ");
    scanf("%d", &numTwo);

    numOne = numOne * 2;
    numTwo = numTwo * 3;
    printf("o dobro do primeiro numero é: %d. E do segundo é: %d", numOne, numTwo);
    return(0);
}