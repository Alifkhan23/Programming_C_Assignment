#include<stdio.h>
main()
{
   int a,b,c;
   float S,Area;
   a=b=c=S=0;
   a=20;
   b=30;
   c=40;
   S=(a+b+c)/2;
   Area=sqrt(S*(S-a)*(S-b)*(S-c));
   printf("Area of a triangle is=%f",Area);

}
