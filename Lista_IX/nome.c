#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char nome[50];
    int i, cont = 1;
    printf("Digite seu nome: ");
    gets(nome);
    printf("Seu nome é %s\n", nome);
    for(i = 0; nome[i] != '\0'; i++){
       cont++;
    };
    printf("o vetor possui %d caracteres armazenados incluindo o barra zero", cont);
    return(0);
}