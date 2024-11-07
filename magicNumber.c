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
    int fnum = num;

    while (num >= 10) {
        num = sumDigits(num);
    }

    if (num == 1)
        printf("%d is a Magic Number.\n", fnum);
    else
        printf("%d is not a Magic Number.\n", fnum);

    return 0;
}
