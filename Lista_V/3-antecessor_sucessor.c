#include <stdio.h>

int main() {
    int num = 0;
    int ant, sucess;
    printf("Digite um numero: ");
    scanf("%d", &num);

    ant = num - 1;
    sucess = num + 1;

    printf("o antecessor do numero %d é %d, e seu sucessor é %d\n", num, ant, sucess);
    return(0);
}