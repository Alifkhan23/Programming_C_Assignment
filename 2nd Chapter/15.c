#include<stdio.h>

#define PIE 3.14
void main()

{

int x1,y1,x2,y2;
float Die,Rad,Area;

x1=2;
y1=2;
x2=5;
y2=6;

Die=sqrt((x2-x1)*(x2-x1)+ (y2-y1)* (y2-y1));
Rad=Die/2;
Area=PIE*Rad*Rad;
printf("Area is= %f",Area);

}

