// WAP to swap two numbers without using third variable

#include <stdio.h>
int main( ) {
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("\n\n");

    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swaped a : %d\nSwaped b : %d",a,b);
    return 0;
}