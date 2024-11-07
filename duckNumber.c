#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num > 0 && num % 10 == 0)
        printf("%d is not a Duck Number.\n", num);
    else {
        int temp = num;
        int isDuck = 0;
        while (temp > 0) {
            if (temp % 10 == 0) {
                isDuck = 1;
                break;
            }
            temp /= 10;
        }
        if (isDuck)
            printf("%d is a Duck Number.\n", num);
        else
            printf("%d is not a Duck Number.\n", num);
    }
    return 0;
}
