#include <stdio.h>

int find_min(int arr[], int size) {
	int i;
    int min = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {5, 3, 8, 1, 9, 2, 7, 4, 6, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = find_min(arr, size);
    printf("En kucuk eleman: %d\n", min);
    return 0;
}

