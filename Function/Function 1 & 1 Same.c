#include<stdio.h>
int add (int a, int b)
{
    int sum;
    sum = a + b;
    return sum;

}

void main()
{
    int Grand_sum;
    Grand_sum = add(20,30);
    printf("Summation = %d", Grand_sum);
}

