// bubble sort program
#include <stdio.h>
void main()
{
    int n, i, j, a[100], temp;

    printf("How many number : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] <= a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

      for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
