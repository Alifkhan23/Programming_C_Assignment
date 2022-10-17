#include<stdio.h>
void main()
{
    int *a;
    int n;
    n= 10;
    a= &n;
    *a=100;
    printf("%d",n);
}
