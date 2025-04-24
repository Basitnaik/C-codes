#include<stdio.h>
int main(){
    //gross salary
    float salary,gross_salary;
    printf("enter the basic salary=");
    scanf("%f",&salary);
    gross_salary= salary+(0.4* salary)+(0.2* salary);
    printf("the gross slalary is =%f\n",gross_salary);
    return 0;
}
