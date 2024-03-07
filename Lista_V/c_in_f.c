#include <stdio.h>

int main() {
    float c, f;
    int chose;

    printf("1-Celsius em Fahrenheit\n2-Fahrenheit em Celsius\n");
    printf("Sua escolha: ");
    scanf("%d", &chose);

    if(chose == 1){
        printf("digite o grau em Celsius: ");
        scanf("%f", &c);

        f = (c * 1.8) + 32;

        printf("O grau em Fahrenheit é: %.1f°\n", f);

    }else if(chose == 2){
        printf("digite o grau em Fahrenheit: ");
        scanf("%f", &f);

        c = (f -32)/1.8;
        printf("O Grau em Celsius é: %.1f°\n", c);
    }

    return(0);
}