#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    sample input:
    n=10
    sample output:
    0   2   4   6   8   10  12  14  16  18

    sample input:
    n=5
    sample output:
    0   2   4   6   8

    */

    int n,i,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i!=n)
        {
            printf("%d\t",x);
            x += 2;
        }
        else
        {
            printf("%d",x);
        }
    }

    return 0;
}
