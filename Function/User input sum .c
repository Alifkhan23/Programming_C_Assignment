#include<stdio.h>

int a, b, sum;

void input()
{
    printf("Enter 2 integer = \n");
    scanf("%d%d", &a, &b);
}

void add()
{
    sum = a + b;
    printf("Summation of %d and %d = %d", a, b, sum);
}
void main()
{
    input();
    add();
}

