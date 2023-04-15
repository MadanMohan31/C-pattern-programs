#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    5
    sample output:
      *
      *
    *****
      *
      *

    */

    int n,i,j,star=0;
    scanf("%d",&n);
    if(n%2==0)
    {
        star = n/2;
    }
    else
    {
        star = n/2+1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==star || j==star)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
