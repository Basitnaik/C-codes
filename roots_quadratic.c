#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,discriminant,root1,root2,realPart,imagePart;
    printf("enter coefficiebt a,b and c;");
    scanf("%f,%f,%f",&a,&b,&c);
    discriminant= b * b - 4 *a *c;
    if(discriminant>0){
        root1 = -b +sqrt(discriminant) /(2*a);
        root2 = -b -sqrt(discriminant) /(2*a);
        printf("roots are real and different");
        printf("root1= %.2f\n",root1);


    }
}