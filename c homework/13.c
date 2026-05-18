// WAP to swap two numbers using (i) Call by value. (ii) Call by reference

#include <stdio.h>

// Call by value
void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

// Call by reference
void swapByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main () {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a=%d, b=%d\n",a,b);
    
    swapByValue(a, b);
    printf("After swapping by value: a=%d, b=%d\n",a,b);
    
    swapByReference(&a, &b);
    printf("After swapping by reference: a=%d, b=%d\n",a,b);
}