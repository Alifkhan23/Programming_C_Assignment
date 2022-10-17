#include<stdio.h>
main()
{
    float Ex,sum,i,j;
    printf("X");
    for(j=0.1;j<=0.5;j+=0.1)
        printf(" %f",j);
        printf("\n");
        for(i=1;i<=5;i++)
            {
                printf("%f",i);
                  for(j=0.1;j<=0.5;j+=0.1)
                    {
                        sum=i+j;
                        Ex=exp(sum);
                        printf(" %f",Ex);
                    }
                    printf("\n");
                    }

}
