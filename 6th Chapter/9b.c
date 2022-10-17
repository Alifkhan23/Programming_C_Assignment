#include<stdio.h>
main()
{
 int y;
 float x;

 printf("Enter the value of X: ");
 scanf("%f",&x);

 if(x>0)
     {
       y=1;
       printf("The value of y for the given value of x=%f is %d\n",x,y);
     }
     else
     {
    if(x==0)
       {
         y=0;
         printf("The value of y for the given value of x=%f is %d\n",x,y);
       }
        else
       {
        y=-1;
        printf("The value of y for the given value of x=%f is %d\n",x,y);
       }
     }
}
