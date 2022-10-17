#include<stdio.h>

void main()
{
 double L,R,C;
 double Freq,Temp1,Temp2;

 printf("Enter Inductance, Resistance, Capacitannce \n");
 scanf("%lf %lf %lf",&L,&R,&C);

 Temp1=(1/(L*C));
 Temp2=((R*R)/(4*C*C));
 Freq=sqrt(Temp1-Temp2);

 printf("The Frequency is : %lf\n",Freq);
 getch();
}

