#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    sample input:
    n=10
    m=3
    sample output:
    ***#***#***#*

    sample input:
    n=6
    m=3
    sample output:
    ***#***

    */

    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        if(i%m==0 && i!=n)
        {
            printf("*#");
        }
        else
        {
            printf("*");
        }
    }

    return 0;
}
