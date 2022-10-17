#include<stdio.h>
main()
{
    int i,j,sum;
    sum=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==1)
            {
                if(j==3)
                {
                    printf("  ");
                }
                else{printf("_");}

            }
            if(i==2)
            {
                if(j==1||j==5)
                {
                    printf("  ");
                }
                else{printf("_");}
        }
        else{printf(" ");}
        {
            printf("\n");
        }
    }
 }
}
