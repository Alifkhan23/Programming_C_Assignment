#include <stdio.h>
main()
{
    int num;
    printf("Enter your mark ");
    scanf("%d",&num);

    if(num >= 80)
        {
	       printf("\nThe Grade is= First Division");
		}
    else if ( num >=60)
        {
		   printf("\nThe grade is= Second Division");
		}
	else if ( num < 60)
	    {
		   printf("\nThe grade is= Third Division");
		}

}
