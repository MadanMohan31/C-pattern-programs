#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    sample input:
    4
    sample output:
    1
    2 3
    4 5 6
    7 8 9 10

    */

    int n,i,j,num=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
