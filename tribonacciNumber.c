#include <stdio.h>

int main() {
    int num, t0 = 0, t1 = 1, t2 = 1, nextTerm;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
        printf("%d is a Tribonacci Number.\n", num);
    else {
        while (t2 < num) {
            nextTerm = t0 + t1 + t2;
            t0 = t1;
            t1 = t2;
            t2 = nextTerm;
        }
        if (t2 == num)
            printf("%d is a Tribonacci Number.\n", num);
        else
            printf("%d is not a Tribonacci Number.\n", num);
    }

    return 0;
}
