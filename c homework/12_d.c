// WAP to print the following patterns:

#include <stdio.h>

int main () {
    int i,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    i=1;
    int k=1;
    while(i<=n) {
        int j=1;
        while(j<=i) {
            printf("%d ",k);
            j++;
            k++;
        }
        printf("\n");
        i++;
    }
}

