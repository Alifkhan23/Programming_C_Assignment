#include<stdio.h>

void main()
{
 float x;
 int y,z;

 printf("Enter floating point number : x= ");
 scanf("%f",&x);
 y=x;
 z=y%10;

 printf(" \nThe Right-most digit of the integral part of the number %f is %d",x,z);
 getch();
}
