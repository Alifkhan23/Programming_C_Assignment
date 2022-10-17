
#include<stdio.h>

void main()
{
 float x;
 int y,z;

 printf("Enter floating point number : x= ");
 scanf("%f",&x);

 y=x;
 z=y%100;

 printf(" \nThe two Right-most digit of the integral part of the number %f is %d",x,z);

 getch();
}
