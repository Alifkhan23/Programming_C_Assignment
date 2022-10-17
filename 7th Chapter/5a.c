#include<stdio.h>
main()
{
    int i,j;

    for(i=1;i<=4;i++)
        {
            for(j=4;j>=i;j--)
            {
                printf("\t1");
            }
            printf("\n");
        }

}

