#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 30;

    int result = linearSearch(arr, n, x);

    if (result == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", result);

    return 0;
}

