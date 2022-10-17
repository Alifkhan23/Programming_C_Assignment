#include<stdio.h>
main()
{
    int i,j,sum;
    sum=1;

    for(i=1;i<=13;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            printf("%d\t",sum);
            sum=sum+1;
        }
          printf("\n");
    }
}
