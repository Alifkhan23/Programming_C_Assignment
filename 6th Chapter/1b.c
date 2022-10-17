
#include<stdio.h>
main()
{
    int x;
    printf("Enter an integer number:");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("The number entered is even");
        exit(0);
    }
        printf("The number entered is odd");

}

