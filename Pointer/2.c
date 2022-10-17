#include<stdio.h>
void main()
{
    int a,b,sum;
    int *A, *B;
    printf("Enter 2 number : ");
    scanf("%d%d", &a, &b);
    A= &a;
    B= &b;
    sum= *A + *B;
    printf("Summation is : %d",sum);

}
