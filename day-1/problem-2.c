#include <stdio.h>

int main() {
    int height;
    printf("Enter a number: ");
    scanf("%d", &height);

    for (int row = 1; row <= height; row++) {
        for (int space = 0; space < height - row; space++) {
            printf(" ");
        }

        for (int ch = 0; ch < row; ch++) {
            printf("%c", 'A' + ch);
        }

        for (int ch = row - 2; ch >= 0; ch--) {
            printf("%c", 'A' + ch);
        }

        printf("\n");
    }

    return 0;
}