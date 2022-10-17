#include<stdio.h>
void main()
{
  int i,Sum,Count;
  Sum=Count=i=0;

    Loop:
      if((i%6==0)&&(i%4!=0))
        {
            printf("%d \n",i);
            Count=Count+1;
            Sum=Sum+i;
        }
      i=i+1;
      if(i<=100)
        goto Loop;
      printf("Sum of Numbers is %d\n",Sum);
      printf("Count of Numbers is %d\n",Count);

}

