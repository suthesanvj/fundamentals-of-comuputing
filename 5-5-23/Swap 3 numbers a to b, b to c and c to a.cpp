#include <stdio.h>

int main() {
    int a, b, c, temp;
    
    printf("Enter the values of a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    temp = a;
    a = b;
    b = c;
    c = temp;
    
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    return 0;
}

