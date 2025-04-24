#include<stdio.h>
int main(){

//conversion
    
    float Celsius , Fahrenheit ;
    printf("write celsius tempature:");
    scanf("%f",&Celsius);
     Fahrenheit = (Celsius * 9 / 5) +32;
     
     printf("%f in celsius is equal to %f  Fahrenheit\n",Celsius, Fahrenheit );

     return 0;
}
