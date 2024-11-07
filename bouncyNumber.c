#include <stdio.h>

int is_bouncy(int num) {
    int last_digit = num % 10;
    num /= 10;
    int increasing = 0, decreasing = 0;

    while (num > 0) {
        int current_digit = num % 10;
        if (current_digit < last_digit)
            decreasing = 1;
        else if (current_digit > last_digit)
            increasing = 1;
        last_digit = current_digit;
        num /= 10;
    }

    return increasing && decreasing;  // If both increasing and decreasing, it's bouncy
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_bouncy(num)) {
        printf("%d is a Bouncy number.\n", num);
    } else {
        printf("%d is not a Bouncy number.\n", num);
    }

    return 0;
}
