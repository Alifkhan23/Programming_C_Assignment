#include <stdio.h>
void main()
{
    int a[100],i,j,x,n,max;
    printf("Enter how many number : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(a[i]<a[j])
           {
               x = a[i];
               a[i] = a[j];
               a[j] = x;
           }
       }
    }
    for(i=1;i<n;i++)
    {
        if(a[i]<a[0])
        {
            printf("Second Largest = %d ",a[i]);
            break;
        }
    }
}
