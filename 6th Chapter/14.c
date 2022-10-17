#include<stdio.h>
void main()
{
    int Num,i,Count,Temp;
    Count=0;
    i=2;

    printf("Enter A Number :--\n");
    scanf("%d",&Num);

    Loop:
        Temp=Num%i;
        if(Temp==0)
            Count=Count+1;
        i=i+1;
        if(i<=Num)
            goto Loop;
        if(Count==1)
            printf("Number %d is Prime",Num);
        else
            printf("Number %d is Not Prime",Num);

}
