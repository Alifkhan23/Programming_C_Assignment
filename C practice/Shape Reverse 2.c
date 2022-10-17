#include<stdio.h>
void main()
{
    int i,j,n;
    //printf("Enter integer: ");
    //scanf("%d",&n);

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }

}
