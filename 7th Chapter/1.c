#include<stdio.h>
void main()
{
    long int Num,Temp,RevNum,Dig;
    printf("Enter any Number:--\n");
    scanf("%ld",&Num);
    Temp=Num;
    RevNum=0;
    while(Temp!=0)
        {
            Dig=Temp%10;
            Temp=Temp/10;
            RevNum=(RevNum*10)+Dig;
        }
        printf("Reverse of Number %ld is %ld\n",Num,RevNum);

}
