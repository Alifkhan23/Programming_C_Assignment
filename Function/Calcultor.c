#include<stdio.h>

int add()
{
    int a,b,sum;
    printf("Enter 2 integer= \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Addition of 2 number = %d",sum);
    return sum;
}
int sub()
{
    int a,b,sum;
    printf("Enter 2 integer= \n");
    scanf("%d%d",&a,&b);
    sum=a-b;
    printf("Subtraction between 2 number = %d",sum);
    return sum;
}
int mult()
{
    int a,b,sum;
    printf("Enter 2 integer= \n");
    scanf("%d%d",&a,&b);
    sum=a*b;
    printf("Multiplication of 2 number = %d",sum);
    return sum;
}
int div()
{
    float a,b,sum;
    printf("Enter 2 integer= \n");
    scanf("%d%d",&a,&b);
    sum=a/b;
    printf("Divide between 2 number = %f",sum);
    return sum;
}

int manubar()
{
    int opt;
    printf("\tChoose your option\n");
    printf("Press - 1 for Addition\n");
    printf("Press - 2 for Subtraction\n");
    printf("Press - 3 for Multiplication\n");
    printf("Press - 4 for Divide\n");
    printf("Press here :- ");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mult();
        break;
    case 4:
        div();
        break;
    default:
        break;
    }

}

void main()
{
    manubar();
}
