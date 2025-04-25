#include <stdio.h>
int main(){
    int a=10,b=5;
    printf("logical oprators:\n");
    printf("(a>0 && b>0):%d\n",(a>0 && b>0));
    printf("(a>0 || b<0):%d\n",(a>0 || b<0));
    printf("!(a==b):%d\n",!(a==b));
    //bitwise oprators
    printf("bitwise oprators:\n");
    printf("a & b= %d\n",a & b);
    printf("a | b=%d\n",a | b);
    printf("a ^ b=%d\n",a ^ b);
    printf("~a= %d\n",~a);
    printf("a << 1 =%d\n", a<<1);
    printf("a >> 1 = %d\n",a >>1);
    return 0;
    


}