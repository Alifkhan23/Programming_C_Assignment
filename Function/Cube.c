#include<stdio.h>

double cube(int x)
{
    int sum;
    sum=(x*x*x);
    return sum;
}

void main()
{
   int num;
   double sum;
   printf("Enter any number = ");
   scanf("%d",&num);

   sum=cube(num);
   printf("cube of %d = %.lf",num,sum);
}
