#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    sample input:
    n=10
    sample output:
    1   3   5   7   9   11  13  15  17  19

    sample input:
    n=5
    sample output:
    1   3   5   7   9

    */

    int n,i,x=1;
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
