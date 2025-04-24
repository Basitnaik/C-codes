#include<stdio.h>
int main(){
//question2 km distance 
float km_distance,meters,feets,inches,centimeters;
printf("Enter distnace in km between two cities\n = ");
scanf("%f",&km_distance);
 meters= km_distance * 1000;
 feets= km_distance * 3280.84;
 inches=  km_distance * 39370.08;
 centimeters= km_distance* 100000;
printf("value of  %f km distnace = %fin meters\n", km_distance,meters);
printf("%fin feets\n",feets);
printf("%f in inches\n" ,inches);
printf ("%f in centimers",centimeters);

return 0;
}
