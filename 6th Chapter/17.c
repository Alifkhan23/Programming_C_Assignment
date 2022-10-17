
#include <stdio.h>
void main()
{
    float a,b;

    printf("Input the values for a and b : ");
    scanf("%f %f", &a, &b);
    if (a == b)
        printf("a and b are equal\n");

        else if (a > b)
        printf("a greater than b\n");

        else if (a < b)
        printf("b greater than a\n");


}
