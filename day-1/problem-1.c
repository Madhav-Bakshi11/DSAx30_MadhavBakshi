#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int dim = 2 * num - 1;

    for (int row = 0; row < dim; row++) {
        for (int col = 0; col < dim; col++) {
            int top = row;
            int left = col;
            int right = dim - 1 - col;
            int bottom = dim - 1 - row;

            int layer = top;
            if (left < layer) layer = left;
            if (right < layer) layer = right;
            if (bottom < layer) layer = bottom;

            printf("%d", num - layer);
        }
        printf("\n");
    }

    return 0;
}