#include<stdio.h>
void main ()
{
    int a[100],sum,i,n;


    printf("How many numbers : ");
    scanf("%d", &n);
    sum=0;

    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
         sum= sum + a[i];
    }

    printf("The sum is = %d\n", sum);
    printf("The average is = %.2f\n", (float)sum/n);
}
