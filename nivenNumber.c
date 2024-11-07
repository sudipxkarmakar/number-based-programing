#include <stdio.h>

int sum_of_digits(int num) {
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

    if (num % sum_of_digits(num) == 0) {
        printf("%d is a Niven number.\n", num);
    } else {
        printf("%d is not a Niven number.\n", num);
    }

    return 0;
}
