#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    int v[8];
    int i;

    for(i = 0; i<=(8-1); i++) {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
    }
    for(i=(8-1); i>=0; i--) {
        printf("%dº número: %d\n",(i+1), v[i]);
    }

    return(0);
}
