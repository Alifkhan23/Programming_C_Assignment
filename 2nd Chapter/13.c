#include<stdio.h>
void main()
{
    int x1,x2,y1,y2;
    float D;

    D=0;
    x1=20;
    x2=30;
    y1=40;
    y2=50;

    D=sqrt((x2-x1)*(x2-x1)+ (y2-y1)* (y2-y1));
    printf("Distance between to points is=%f",D);
}
