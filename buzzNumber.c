#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 7 == 0 || num % 10 == 7)
        printf("%d is a Buzz Number.\n", num);
    else
        printf("%d is not a Buzz Number.\n", num);

    return 0;
}
