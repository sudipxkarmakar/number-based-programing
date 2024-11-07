#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum > num)
        printf("%d is an Abundant Number.\n", num);
    else
        printf("%d is not an Abundant Number.\n", num);

    return 0;
}
