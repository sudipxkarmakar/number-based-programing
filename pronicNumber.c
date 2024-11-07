#include <stdio.h>

int main() {
    int num, i = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i * (i + 1) < num) {
        i++;
    }

    if (i * (i + 1) == num)
        printf("%d is a Pronic Number.\n", num);
    else
        printf("%d is not a Pronic Number.\n", num);

    return 0;
}
