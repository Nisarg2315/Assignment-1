#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total, average;

    // Taking input
    printf("Enter marks of Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &sub3);

    // Calculate total and average
    total = sub1 + sub2 + sub3;
    average = total / 3;

    // Display results
    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}
