#include<stdio.h>
main()

{
 int u,t,a;
 float Dis;

 printf("Enter the value of u,a and t\n");
 scanf("%d %d %d",&u,&a,&t);

 Dis=(u*t)+(a*(t*t))/2;
 printf("The distance is : %f \n",Dis);
 getch();
}
