#include <stdio.h>
int main(){
//avrage of 3 numbers
float number1, number2, number3 ,avrage;
printf("Enter numuber 1:");
scanf("%f", &number1 );
printf("Enter number 2:");
scanf("%f", &number2 );
printf("Enter number 3:");
scanf("%f", &number3 );
avrage = (number1 + number2 + number3) /3;
printf("Avrage of numbers is=%.2f\n" , avrage);

return 0;
}