#include<stdio.h>
main()
{
    int m,i,Fib1,Fib2,Fib;
    printf("Enter Length of Series:--\n");
    scanf("%d",&m);
    Fib1=0;
    Fib2=i=1;
    printf("Fibonacci Numbers-->\n");
    if(m>1)
        {
            printf("%d ", Fib2);
        }
        do
            {
                Fib=Fib1+Fib2;
                Fib1=Fib2;
                Fib2=Fib;
                i=i+1;
                printf("%d ",Fib);
            }
            while(i<=m-1);

}
