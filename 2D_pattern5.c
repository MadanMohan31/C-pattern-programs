#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    input:
    n=3
    output:
    1
    2 2
    3 3 3

    */

    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;

    return 0;
}
