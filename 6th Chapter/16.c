#include <stdio.h>
main()
{
    char * WEEKS [] = { "Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", "Saturday",
                            "Sunday"};
    int week;


    printf("Enter week number (1-7): ");
    scanf("%d", &week);
    if(week > 0 && week < 8)
        {
            printf("%s", WEEKS[week-1]);
        }
        else
            {
                printf("Invalid input! Please enter week number between 1-7.");
            }


}
