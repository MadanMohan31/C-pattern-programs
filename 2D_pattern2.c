#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    sample input:
    n=3
    sample output: (n*n matrix)
    *
    * *
    * * *

    */

    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
