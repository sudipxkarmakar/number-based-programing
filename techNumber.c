#include <stdio.h>
#include <math.h>

int main() {
    int num, half, left, right;
    printf("Enter a number: ");
    scanf("%d", &num);

    int digits = log10(num) + 1;

    if (digits % 2 == 0) {
        half = digits / 2;
        left = num / pow(10, half);
        right = num % (int)pow(10, half);

        if ((left + right) * (left + right) == num)
            printf("%d is a Tech Number.\n", num);
        else
            printf("%d is not a Tech Number.\n", num);
    } else {
        printf("%d is not a Tech Number.\n", num);
    }

    return 0;
}
