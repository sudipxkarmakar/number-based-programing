#include <stdio.h>

int sumDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = sumDigits(num);
    while (sum >= 10) {
        sum = sumDigits(sum);
    }

    if (sum == 1 && num % sum == 0)
        printf("%d is a Harshad Magic Number.\n", num);
    else
        printf("%d is not a Harshad Magic Number.\n", num);

    return 0;
}
