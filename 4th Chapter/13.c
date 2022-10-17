#include<stdio.h>

void main()
{
 int code,call;
 float bill;

 printf("Enter customer code and number of calls made:");
 scanf("%d %d",&code,&call);
 bill=250+(call*1.25);
 printf("Bill=%f",bill);
 getch();
}
