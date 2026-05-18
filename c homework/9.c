// Write a C program to count the number of digits and calculate sum of digits of a number

#include <stdio.h>
int main() {
    int num, digit, count = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num; // Store original number for counting digits
    while (temp > 0) {
        digit = temp % 10; // Get the last digit
        sum += digit;      // Add to sum
        count++;           // Increment digit count
        temp /= 10;        // Remove the last digit
    }
    printf("Number of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);
    return 0;
}
