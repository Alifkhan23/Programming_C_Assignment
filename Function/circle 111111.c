#include<stdio.h>


double input()
{
    double r;
    printf("Enter radius of the circle = ");
    scanf("%lf",&r);
    return r;
}
void dia(double rad)
{
    double diam;
    diam=2*rad;
    printf("\nDiameter of the circle = %lf\n\n",diam);
}
void cir(double rad)
{
    double cir;
    cir=2*3.1416*rad;
    printf("Circumference of the circle = %lf\n\n",cir);
}
void area(double rad)
{
    double area;
    area=3.1416*rad*rad;
    printf("Diameter of the circle = %lf\n\n",area);
}

void main()
{
    double rad;
    rad=input();
    dia(rad);
    cir(rad);
    area(rad);
}
