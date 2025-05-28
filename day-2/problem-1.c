#include <stdlib.h>

int* findTwoSum(int* arr, int length, int target, int* size) {
    for (int x = 0; x < length; x++) {
        for (int y = x + 1; y < length; y++) {
            if (arr[x] + arr[y] == target) {
                int* indices = (int*)malloc(2 * sizeof(int));
                indices[0] = x;
                indices[1] = y;
                *size = 2;
                return indices;
            }
        }
    }
    *size = 0;
    return NULL;
}