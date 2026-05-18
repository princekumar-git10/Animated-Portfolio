// WAP to print the following patterns:

#include <stdio.h>

int main () {
    int i,n;
    printf("Enter the nth number: ");
    scanf("%d",&n);
    i=1;
    while(i<=n) {
        int j=1;
        while(j<=i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
}