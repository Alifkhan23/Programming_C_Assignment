#include<stdio.h>
main()
{
    int i,j;
    for(i=4;i>=1;i--)
        {
            printf(" ");
            for(j=1;j<=i;j++)
            {
                printf("\t*");
            }
            printf("\n");
        }

}
