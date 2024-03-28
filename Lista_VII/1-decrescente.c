#include <stdio.h>
#include <locale.h>

int main() {
    int num ;
    printf("numero em ordem decrescente:\n");
    for (num = 500; num >= 0; num--)
    {
        printf("%d\n", num);
    }
    return(0);
}