#include<stdio.h>
main()
{
    int i,age,c=0;
    for(i=1;i<=5;i++)
        {
            printf("Enter the age of the person%d:",i);
            scanf("%d",&age);
            if (age>=50 && age<=60)
            c=c+1;
        }
        printf("The number of persons in the age group 50 to 60 are : %d",c);

}
