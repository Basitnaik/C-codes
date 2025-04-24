#include<stdio.h>
int main(){
//Write a program to print the smallest number of two.
float number1,number2;
printf("enter the number1:");
scanf("%f", &number1);
printf("enter the number2:");
scanf("%f",&number2);
if (number1<number2){
    printf("samllest number is number1\n");
}
else if (number1>number2){
    printf("smallest number is number 2\n");
}
else 
    printf("both are equal");

    return 0;
}