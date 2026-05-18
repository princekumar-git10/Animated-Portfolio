// WAP to calculate Farenheit to celcius and vice versa

#include<stdio.h>

int main() {
    float f,c;

    // if (1) {
    printf ("Enter Temperature in degree celcius : ");
    scanf ("%f",&c);
    // F = (C × 9/5) + 32   
    f = (c * 9/5) + 32;
    printf ("\n%.2f °C = %.2f °F",c,f);
    printf("\n\n");   
    // }

    // if (1) {
    printf ("Enter Temperature in degree farenheit : ");
    scanf ("%f",&f); 
    // C = (F − 32) × 5/9
    c = (f-32) * 5/9;
    printf ("\n%.2f °F = %.2f °C",f,c);
    // }
}

