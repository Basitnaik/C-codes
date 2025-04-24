#include<stdio.h>
int main(){
//percentage calculator
float marks,total_marks=500,percentage,obtain_marks;
float math,science,urdu,english,socail_science;
printf("enter the marks of math\n : ");
scanf("%f",&math);
printf("enter the marks of english : ");
scanf("%f",&english);
printf("enter the marks of science : ");
scanf("%f",&science);
printf("enter the marks of urdu : ");
scanf("%f",&urdu);
printf("enter the marks of socail science: ");
scanf("%f",&socail_science);
obtain_marks= ( math+ science+  urdu+ english+socail_science);

percentage= (obtain_marks/total_marks) * 100;
printf("total obtained marks=%f\n",obtain_marks);
printf("percentage of marks =%f\n", percentage);

 return 0; 
    
}