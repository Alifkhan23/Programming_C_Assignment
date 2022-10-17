#include<stdio.h>
main()
{
    float RicePrice,SugarPrice;

    printf("Enter the price of Rice=\n");
    scanf("%f",&RicePrice);
    printf("Enter the price of Sugar=\n");
    scanf("%f",&SugarPrice);

    printf("***LIST OF ITEMS***\n");
    printf("Item     Price\n");
    printf("Rice     Rs.%f\n",RicePrice);
    printf("Sugar    Rs.%f\n",SugarPrice);

}
