#include<stdio.h>
void main()
{
    double x,Val;
    char T;
    Val=0;
    printf("Enter Angle:--\n");
    scanf("%lf",&x);
    printf("\ns or S for Sin(x)");
    printf("\nc or C for Cos(x)");
    printf("\nt or T for Tan(x)");
    printf("\nEnter Choice\n");
    T=getch();
    if((T=='s')||(T=='S'))
        Val=sin(x);
    else if((T=='c')||(T=='C'))
        Val=cos(x);
    else if((T=='t')||(T=='T'))
        Val=tan(x);
    else
        printf("\nWrong Input\n");
        printf("Value:--- %lf",Val);
getch();
}
