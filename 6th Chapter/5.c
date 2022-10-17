#include<stdio.h>
main()
{
    int Maths,Phy,Chem,Total,Total_MP;

    printf("Enter the marks of maths=");
    scanf("%d",&Maths);
    printf("Enter the marks of phy=");
    scanf("%d",&Phy);
    printf("Enter the marks of chem=");
    scanf("%d",&Chem);

    Total=Maths+Phy+Chem;
    Total_MP=Maths+Phy;

    if(Maths>=60&&Phy>=50&&Chem>=40)
    {
        if(Total>=200 || Total_MP>=150)
        {
            printf("The candidates is eligible for admission");
        }
        else
        {
            printf("The candidates is not eligible for admission");
        }
    }
}
