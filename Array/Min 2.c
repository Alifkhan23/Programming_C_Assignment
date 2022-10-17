#include<stdio.h>
void main()
{
    int num[100],n,i;
    //printf("Enter how many number :  ");
    //scanf("%d",&n);

    for(i=0; i<=4; i++)
    {
        scanf("%d",&num[i]);
    }

    int min = num[0];

    for(i=0; i<=4; i++)
    {
        if(min > num[i])
            min = num[i];
    }
    printf("Minimum number is : %d", min);
}

