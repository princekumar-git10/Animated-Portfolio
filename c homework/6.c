// WAP to create a simple calculator using switch case

#include<stdio.h>
int main() {
    int a,b;
    char op;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter operator (+,-,*,/) : ");
    scanf("%s", &op);
    printf("Enter b : ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            printf("%d + %d = %d",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d",a,b,a*b);
            break;
        case '/':
            if (b != 0) {
                printf("%d / %d = %f",a,b,(float)a/b);
            }
            else {
                printf("Division by zero is not allowed");
            }
            break;
        default:
            printf("Invalid operator");
    }
}