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

    int row,position;
    scanf("%d",&row);

    for(position=1;position<=row*row;position++)
    {
        if(position%row!=0)
        {
            if(position>=1 && position<=row)
            {
                printf("*");
            }
            else if(position%row==1 || position%row==0)
            {
                printf("*");
            }
            else if(position>row*row-row && position<=row*row)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        else
        {
            printf("*\n");
        }
    }

    return 0;
}
