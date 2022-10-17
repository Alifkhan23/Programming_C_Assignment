#include<stdio.h>
main()
{
 float Dr,Sc,Hc;
 float TBO,EOQ;

 printf("Enter Demand Rate \n");
 scanf("%f\n",&Dr);
 printf("Enter Setup Cost \n");
 scanf("%f\n",&Sc);
 printf("Enter Holding Cost \n");
 scanf("%f\n",&Hc);

 EOQ=sqrt((2*Dr*Sc)/Hc);
 TBO=sqrt((2*Sc)/(Dr*Hc));

 printf("The Economic Order Quantity is : %f\n",EOQ);
 printf("The time Between Order is : %f",TBO);
 getch();
}
