#include<stdio.h>

void main()
{
 int m,n,x;

 printf("Enter Two Numbers:--\n");
  scanf("%d %d",&m,&n);
 x=m%n;
 (x==0)?printf("m is multiple of n\n"):printf("m is not multiple of n\n");
}
