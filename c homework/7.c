// Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a natural number n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a natural number greater than or equal to 1.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of all natural numbers between 1 and %d is: %d\n", n, sum);
    return 0;
}