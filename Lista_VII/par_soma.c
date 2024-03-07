#include <stdio.h>

int main() {
    int num, sum;
    sum = 0;
    num = 1;
    while (num <= 500)
    {
        if(num%2==0) {
            sum= sum + num;
        }
        num++;

    }
    printf("soma dos números é: %d\n",sum);
    return(0);
}