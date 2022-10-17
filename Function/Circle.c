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
        printf("\nDiameter of the circle = %lf\n\n",(2*rad));
    }

    void cir(double rad)
    {
        printf("Circumference of the circle = %lf\n\n",(2*3.1416*rad));
    }

    void area(double rad)
    {
        printf("Area of the circle = %lf\n",(3.1416*rad*rad));
    }

    void main()
    {
        double rad;
        rad = input();
        dia(rad);
        cir(rad);
        area(rad);
    }

