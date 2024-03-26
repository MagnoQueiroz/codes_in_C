#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int i, v[5], result= 0;

    for(i=0; i<5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);

    }
    for(i=0; i<5; i++) {
        result = result + i;
    }
    printf("O Resultado da soma do dados é: %d", result);
    return(0);
}