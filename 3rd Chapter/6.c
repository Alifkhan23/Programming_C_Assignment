#include<stdio.h>

#define PIE 3.14
main()
{
    float Area,Rad;

    printf("Enter Radius=\n");
    scanf("%f",&Rad);

    Area=PIE*Rad*Rad;

    printf("Area of the circle is=%f",Area);

}
