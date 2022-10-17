#include<stdio.h>
main()
{
    long int Num,Temp,Sum,Dig;
    printf("Enter any Number:--\n");
    scanf("%d",&Num);
    Temp=Num;
    Sum=0;

    while(Temp!=0)
        {
            Dig=Temp%10;
            Temp=Temp/10;
            Sum=Sum+Dig;
        }
        printf("Sum of Number %d is %d\n",Num,Sum);

}
