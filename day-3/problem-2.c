int deleteValue(int* arr, int size, int target) {
    for (int i = 0; i < size; ) {
        if (arr[i] == target) {
            for (int k = i; k < size - 1; k++) {
                arr[k] = arr[k + 1];
            }
            size--;
        } else {
            i++;
        }
    }
    return size;
}