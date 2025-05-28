#include <stdio.h>
#include <math.h>

int main() {
    int start, end;
    int total = 0;

    printf("Enter two numbers (start and end): ");
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++) {
        long long sq = (long long)num * num;

        int len = 0, temp = num;
        while (temp) {
            len++;
            temp /= 10;
        }

        long long factor = (long long)pow(10, len);
        int first = sq / factor;
        int second = sq % factor;

        if ((first + second) == num && second != 0) {
            printf("%d ", num);
            total++;
        }
    }

    if (total == 0) {
        printf("No Kaprekar numbers found.\n");
    } else {
        printf("\nTotal Kaprekar numbers: %d\n", total);
    }

    return 0;
}#include <stdio.h>
#include <math.h>

int main() {
    int start, end;
    int total = 0;

    printf("Enter two numbers (start and end): ");
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++) {
        long long sq = (long long)num * num;

        int len = 0, temp = num;
        while (temp) {
            len++;
            temp /= 10;
        }

        long long factor = (long long)pow(10, len);
        int first = sq / factor;
        int second = sq % factor;

        if ((first + second) == num && second != 0) {
            printf("%d ", num);
            total++;
        }
    }

    if (total == 0) {
        printf("No Kaprekar numbers found.\n");
    } else {
        printf("\nTotal Kaprekar numbers: %d\n", total);
    }

    return 0;
}