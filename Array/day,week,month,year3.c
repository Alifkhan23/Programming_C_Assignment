#include <stdio.h>

int main()
{
    int days, years, months, weeks;

    printf("Enter days: ");
    scanf("%d", &days);

    years = (days / 365);
    printf("\nTotal years :%d", years);
    days = days - (years*365);

    months = (days / 30);
    printf("\nTotal months :%d", months);
    days = days - (months*30);

    weeks = days / 7;
    printf("\nTotal weeks :%d", weeks);
    days = days - (weeks*7);

    printf("\nTotal days = %d", days);

}

