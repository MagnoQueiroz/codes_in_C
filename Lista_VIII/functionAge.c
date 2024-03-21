#include <stdio.h>
#include <locale.h>

int fAge(int age);


int main(){
    int age = 0;

    printf("digite sua idade: ");
    scanf("%d", &age);

    fAge(age);

    return (0);
}

int fAge(int age) {
    if (age >=18 ) {
        printf("VC É MAIOR DE IDADE");
    }else {
        printf("vc é menor de idade");
    }
    return(age);
}