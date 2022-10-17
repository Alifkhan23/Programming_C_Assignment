#include <stdio.h>

main()
{
    int i;
    int upper=0,lower=0;
    char ch[100];
    printf("Enter the String:\n");
    gets(ch);
    for(i=0; ch[i]!=0; i++)
        {
            if(ch[i]>='A' && ch[i]<='Z')
            {
                upper++;
            }
    else if(ch[i]>='a' && ch[i]<='z')
            {
                lower++;
            }
    }
    printf("lowercase letters: %d",lower);
    printf("\n uppercase letters: %d",upper);

}
