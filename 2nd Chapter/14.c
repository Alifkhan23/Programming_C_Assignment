#include<stdio.h>

#define PIE 3.14
main()
{

    int o1,o2,x1,y1;
    float Circum,Rad,Area;

    o1=0;
    o2=0;
    x1=4;
    y1=5;

    Rad=sqrt((x1-o1)*(x1-o1)+(y1-o2)*(y1-o2));
    Circum=2*PIE*Rad;
    Area=PIE*Rad*Rad;

    printf("Circumference is=%f\n Area is=%f",Circum,Area);

}
