#include <stdio.h>
#include <locale.h>

float volume(float lag, float comp, float alt);

int main(){
    float lag, comp, alt, ret;
    printf("digite a largura, comprimento e altura: ");
    scanf("%f %f %f", &lag, &comp, &alt);

    ret = volume(lag, comp, alt);

    printf("o volume é: %.2f", ret);
    return 0;

}

float volume(float lag, float comp, float alt) {
    float resultado = lag * comp* alt;

    return(resultado);
}