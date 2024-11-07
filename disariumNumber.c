#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
        count--;
    }

    if (sum == num)
        printf("%d is a Disarium Number.\n", num);
    else
        printf("%d is not a Disarium Number.\n", num);

    return 0;
}
