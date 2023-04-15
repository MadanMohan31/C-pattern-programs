#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    /*
    
    sample input:
    5
    sample output:
    11112
    32222
    33334
    54444
    55556
    
    */

    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=1;j++)
        {
            if(i%2==0)
            {
                printf("%d",i+1);
            }
            else
            {
                printf("%d",i);
            }
        }
        for(k=1;k<=n-2;k++)
        {
            printf("%d",i);
        }
        for(j=1;j<=1;j++)
        {
            if(i%2!=0)
            {
                printf("%d",i+1);
            }
            else
            {
                printf("%d",i);
            }
        }
        printf("\n");

    }

    return 0;
}
