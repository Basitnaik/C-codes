#include<stdio.h>
int main(){

//Write a program to check if given character is digit or not
char ch;
printf("enter the character:");
scanf("%c",&ch);
if (ch >= '0' && ch <='9'){
    printf("the character '%c' is digit \n", ch);
}
else {
    printf(" character '%c' is not digit" ,ch);
}
return 0;
}