#include <stdio.h>
#include <stdbool.h>

int digit_square_sum(int num) {
    if (num == 1) {
        return true;
    }
    int total = 0;
    while (num > 0) {
        int digit = num % 10;
        total += digit * digit;
        num /= 10;
    }
    return digit_square_sum(total);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (digit_square_sum(number)) {
        printf("happy");
    }

    return 0;
}