#include<stdio.h>
main()
{
    float i,n;
    float e1,e2;
    printf("Enter No.");
    scanf("%f",&n);
    e2=1;
    e1=1;
    for(i=1;i<=n;i++)
        {
            e1=e1+((float)1/fact(i));
            if((e1-e2)<0.00001)
                break;
            e2=e1;
        }
        printf("The value of e is : %f",e1);

}
