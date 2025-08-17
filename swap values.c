#include <stdio.h>

int main()
{
    int a, b, temp;

    // Input values
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Swapping
    temp = a;
    a = b;
    b = temp;

    // Output result
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
