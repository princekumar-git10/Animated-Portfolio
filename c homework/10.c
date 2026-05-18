// // Write a C program to check whether a number is palindrome or not.

// #include <stdio.h>
// int is_palindrome(int num) {
//     int reversed = 0, original = num;
//     while (num > 0) {
//         reversed = reversed * 10 + (num % 10);
//         num /= 10;
//     }
//     return original == reversed; // Check if original number equals reversed
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (is_palindrome(num)) {
//         printf("%d is a palindrome.\n", num);
//     } else {
//         printf("%d is not a palindrome.\n", num);
//     }
//     return 0;
// }


// Write a C program to check whether a number is palindrome or not.

#include <stdio.h>

int main( ) {
    int n, rev=0 , rem;
    printf("Enter n : ");
    scanf("%d",&n);

    int temp=n;
    for (;temp>0;) {
        rem=temp%10;
        rev = rev * 10 + rem;
        temp = temp/10;
    }

    if (rev == n) {
        printf("%d is a palindrome",n);
    }
    else {
        printf("%d is not a palindrome",n);
    }
}
