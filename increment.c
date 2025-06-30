#include<stdio.h>
int main(){
int a=3,b=2;
    // Increment/Decrement Operators
    printf("Increment/Decrement Operators:\n");
    printf("a++ = %d\n", a++);
    printf("Now a = %d\n", a);
    printf("++a = %d\n", ++a);
    printf("a-- = %d\n", a--);
    printf("Now a = %d\n", a);
    printf("--a = %d\n\n", --a);
    // Conditional (Ternary) Operator
    printf("Conditional Operator:\n");
    int max = (a > b) ? a : b;
    printf("Max of a and b: %d\n\n", max);
    // sizeof Operator
    printf("sizeof Operator:\n");
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %f bytes\n", sizeof(float));
    printf("Size of char: %c bytes\n\n", sizeof(char));
        // Address Operators
    printf("Pointer Operators:\n");
    printf("Address of a: %d\n", &a);
return 0;
}