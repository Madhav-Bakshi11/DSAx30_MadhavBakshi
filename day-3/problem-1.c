int findInsertPosition(int* arr, int length, int key) {
    int low = 0;
    int high = length - 1;
    int middle;

    while (low <= high) {
        middle = (low + high) / 2;

        if (arr[middle] == key) {
            return middle;
        } else if (arr[middle] < key) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }

    return low;
}