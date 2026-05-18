// WAP to print the following patterns:

#include <stdio.h>

int main () {
    int i,n;
    printf("Enter the nth number: ");
    scanf("%d",&n);
    i=n;
    while(i>=1) {
        int j=1;

        while(j<=i) {
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i--;
    }
}

