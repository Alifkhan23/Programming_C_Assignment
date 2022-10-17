#include<stdio.h>
main()
{
    int i,c;
    printf("The numbers from 1 to 100 which are divisible\n by 3 & 5 are:\n\n");
    for(i=1;i<=100;i++)
    {
        if((i%3==0)&&(i%5==0))
        {
            printf("%d\n",i);
            c++;
        }
    }
    printf("\nTotal divisible number = %d",c);

}
