#include<stdio.h>
main()
{
    int i,j,sum;
    sum=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
          sum=sum+1;
          printf("%d\t",sum);
        }
         printf("\n");
    }
}
