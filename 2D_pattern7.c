#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    sample input:
    5
    sample output:
    *****
    *   *
    *   *
    *   *
    *****

    */

    int n;
    scanf("%d",&n);
    int i, j, k, l, star=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
