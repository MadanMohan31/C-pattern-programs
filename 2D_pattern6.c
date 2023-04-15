#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    sample input:
    3
    sample output:
      *
     ***
    *****

    */

    int n;
    scanf("%d",&n);
    int i, j, k, l, star=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
           printf(" ");
        }
        for(k=1;k<=star;k++)
        {
            printf("*");
        }
        for(l=1;l<=n-i;l++)
        {
            printf(" ");
        }
        star+=2;
        printf("\n");
    }
}
