#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    sample input:
    5
    sample output:
    *   *
     * *
      *
     * *
    *   *

    */

    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || i+j==n+1)
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
