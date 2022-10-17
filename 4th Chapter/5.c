#include<stdio.h>

void main()
{
 int SmallNo,LargeNo;
 float RealNo;

 printf("Enter the real no.");
 scanf("%f",& RealNo);

 SmallNo=RealNo;
 LargeNo=RealNo;

 printf("Smallest integer not   ");
 printf("The given no.          ");
 printf("Largest integer not \n");

 printf("less than the number  ");
 printf("                        greater than the no.\n");

 printf("%d                    ", SmallNo);
 printf("%f             ",RealNo);
 printf("%d", LargeNo);

 getch();
}

