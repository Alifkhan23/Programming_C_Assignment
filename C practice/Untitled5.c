#include<stdio.h>
main()
{
    int money;
    scanf("%d",&money);

    do
    {
        printf("Chocolate \n");
        money-=2;
    }
    while(money>=2);
}
