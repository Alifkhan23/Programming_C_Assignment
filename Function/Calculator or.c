#include<stdio.h>

int add()
{
    int a,b,sum;
    printf("Enter 2 integer= \n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;
}
int sub()
{
    int a,b,sum;
    printf("Enter 2 integer= \n");
    scanf("%d%d",&a,&b);
    sum=a-b;
    return sum;
}
int mult()
{
    int a,b,sum;
    printf("Enter 2 integer= \n");
    scanf("%d%d",&a,&b);
    sum=a*b;

    return sum;
}
int div()
{
    float a,b,sum;
    printf("Enter 2 integer= \n");
    scanf("%d%d",&a,&b);
    sum=a/b;
    printf("Divide between 2 number = %f\n\n",sum);
    return sum;
}

int manubar()
{
    int opt;
    label:
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
        printf("Addition of 2 number = %d\n\n",add());
        goto label ;
        break;
    case 2:
        printf("Subtraction between 2 number = %d\n\n",sub());
        goto label;
        break;
    case 3:
        printf("Multiplication of 2 number = %d\n\n",mult());
        goto label;
        break;
    case 4:
        div();
        goto label;
        break;
    default:
        break;
    }

}

void main()
{
    manubar();
}

