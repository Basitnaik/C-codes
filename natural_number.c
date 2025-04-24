#include<stdio.h>
int main(){
//find natural number
int number;
printf("enter the number:");
scanf("%d",&number);
if (number>= 1){
    printf("%d is natural number",number);
}
else {
    printf("%d  is not natural number",number);
}

return 0;
}
