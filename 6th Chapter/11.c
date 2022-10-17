#include<stdio.h>
void main()
{
   float Lenght,Height,Hypotenuse;
   float Temp1,Temp2;

   printf("Enter Length Height and Hypotenuse of Triangle--\n");
   scanf("%f %f %f",&Lenght,&Height,&Hypotenuse);

   Temp1=Hypotenuse*Hypotenuse;
   Temp2=Lenght*Lenght+Height*Height;

   if(Temp1==Temp2)

   printf("Triangle is Right Angle Triangle\n");

  else

   printf("Triangle is Not a Right Angle Triangle\n");
}
