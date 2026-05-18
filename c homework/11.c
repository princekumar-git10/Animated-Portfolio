// Write a C program to print Fibonacci series up to n terms.

#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    printf("Fibonacci series up to %d terms: ", n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
            continue;
        }
        if (i == 2) {
            printf("%d ", b);
            continue;
        }
        next = a + b; // Calculate next term
        a = b;        // Update a to b

        b = next;        // Update b to next
        printf("%d ", next);  // Print next term
    }
    printf("\n");
    return 0;
}
