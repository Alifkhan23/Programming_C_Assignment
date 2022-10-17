#include<stdio.h>
void main()
{
    int i,j,n;
    //printf("Enter integer: ");
    //scanf("%d",&n);

    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c\t",j+64);
        }
        printf("\n");
    }
}
