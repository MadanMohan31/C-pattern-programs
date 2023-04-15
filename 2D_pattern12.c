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
     ***
      *

    */

    int n;
    scanf("%d",&n);
    int i, j, k, l, star1=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
           printf(" ");
        }
        for(k=1;k<=star1;k++)
        {
            printf("*");
        }
        for(l=1;l<=n-i;l++)
        {
            printf(" ");
        }
        star1+=2;
        printf("\n");
    }

    int star2 = star1-4;

    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=star2;k++)
        {
            printf("*");
        }
        for(l=1;l<=i;l++)
        {
            printf(" ");
        }
        star2 -= 2;
        printf("\n");
    }
}
