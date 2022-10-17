#include<stdio.h>
void main()
{
    int a[100],n,i;
    //printf("Enter how many number :  ");
    //scanf("%d",&n);

    for(i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }

    int max = a[0];

    for(i=0; i<=4; i++)
    {
        if(max < a[i])
            max = a[i];
    }
    printf("Maximum number is : %d", max);
}
