#include<stdio.h>
void add (int a, int b)
{
    int sum;
    sum = a + b;
    printf("Summation %d and %d = %d\n ", a, b, sum);
}

void main()
{
    add(10,20);
    add(30,40);
    add(50,60);
}

