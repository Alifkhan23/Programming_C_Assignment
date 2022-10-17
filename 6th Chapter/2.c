#include<stdio.h>
main()
{
    int i,Sum;
    Sum=0;

    for(i=101;i<=199;i++)
    {
        if(i%7==0)
        {
            printf("%d\n",i);
            Sum=Sum+i;

        }
    }
    printf("Summation is =%d",Sum);
}
