#include <stdio.h>

int main()
{
    int i, j;
    int P[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0,
               2, 3, 5, 7, 3, 1, 0, 8, 9, 6,
               3, 4, 8, 9, 0, 7, 4, 6, 7, 5,
               5, 6, 7, 8, 9, 0, 2, 3, 4, 5};
    int F[10] ;
    for (i=0; i<10;i++)
        {
            F[i]=0;
        }

    for (j = 0; j < 40; j++)
    {
        F[P[j]]++;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\t%d\n", i, F[i]);
    }

    return 0;
}