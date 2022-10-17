#include<stdio.h>
main()
{
    int P,n;
    float V,r,temp;
    printf("Enter Principal Amount:--\n");
    scanf("%d",&P);
    printf("For P:-- %d\n",P);
    for(r=0.1;r<=0.15;r+=0.01)
        {
            printf("For Rate %f\n",r);
            printf("n V");
            for(n=1;n<=5;n++)
                {
                    printf("%d ",n);
                    temp=pow((1+r),n);
                    V=P*temp;
                    printf("%f",V);
                }
        }
       printf("\n x = %f; n = %d; x to power n = %f\n");

}
