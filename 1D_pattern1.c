#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    sample input:
    n = 10
    sample output:
    0,2,4,6,8,10.

    sample input:
    n = 5
    sample output:
    0,2,4.

    */

    int n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            if(i==n || i==n-1)
            {
                printf("%d.",i);
            }
            else
            {
                printf("%d,",i);
            }
        }
    }

    return 0;
}
