#include<stdio.h>
int add()
{
    int num1 = 10, num2 = 20, sum ;
    sum = num1 + num2 ;
    return sum ;
}
int sub()
{
    int num1 = 20, num2 = 10, sum ;
    sum = num1 - num2 ;
    return sum ;
}

void main()
{
    printf("Summation =%d\n", add());
    printf("Subtraction =%d\n", sub());
}




