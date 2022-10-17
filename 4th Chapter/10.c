#include<stdio.h>
void main()
{
int x,y,z;

printf("Enter Three Numbers:--\n");
scanf("%d %d %d",&x,&y,&z);
((x>y)&&(x>z))printf("Largest is x :-- %d",x):((y>x)&&(y>z))printf("Largest is y :--%d",y):printf("Largest is z :-- %d",z);
getch();
}
