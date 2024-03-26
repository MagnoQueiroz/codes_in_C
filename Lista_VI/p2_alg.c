#include <stdio.h>

int main() {
    int num;

    printf("write one number, please: ");
    scanf("%d", &num);

    if(num > 0) {
        printf("%d is positive \n", num);

    }
    else if (num < 0) {
        printf("%d is negative \n", num);
    }
    else {
        printf("0 is neutral \n");
    }

    return (0);
}