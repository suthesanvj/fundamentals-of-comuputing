#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Odd numbers from 1 to %d are: ", n);
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}

