#include <stdio.h>
#include <math.h>

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

    int cube_root = cbrt(num); // cube root of the number

    if (sum_of_digits(num) == cube_root) {
        printf("%d is a Dudeney number.\n", num);
    } else {
        printf("%d is not a Dudeney number.\n", num);
    }

    return 0;
}
