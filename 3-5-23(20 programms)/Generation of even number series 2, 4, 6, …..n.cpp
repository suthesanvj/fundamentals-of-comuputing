#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 2 to %d are: ", n);
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}

