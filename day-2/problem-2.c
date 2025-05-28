#include <stdio.h>

void rotateRightOnce(int data[], int len) {
    int temp = data[len - 1];
    for (int i = len - 1; i > 0; i--) {
        data[i] = data[i - 1];
    }
    data[0] = temp;
}

int main() {
    int values[] = {1, 2, 3, 4, 5};
    int size = sizeof(values) / sizeof(values[0]);

    rotateRightOnce(values, size);

    printf("Rotated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", values[i]);
    }

    return 0;
}