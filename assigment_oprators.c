#include<stdio.h>
int main(){
int a=2,b=3,c;
printf("Assignment Operators:\n");
    c = a;
    c += b;
    printf("c += b: %d\n", c);
    c -= b;
    printf("c -= b: %d\n", c);
    c *= b;
    printf("c *= b: %d\n", c);
    c /= b;
    printf("c /= b: %d\n", c);
    c %= b;
    printf("c %%= b: %d\n\n", c);
return 0;
}