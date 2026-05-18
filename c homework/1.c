// WAP to calculate area of triangle using heron's formula

#include<stdio.h>
#include<math.h>
int main () {
    int s,a,b,c;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);

    // area of triangle : s(s-a)(s-b)(s-c)
    // here s = (a+b+c)/2

    s = (a+b+c)/2;

    double area;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is %f\n", area);
    
}