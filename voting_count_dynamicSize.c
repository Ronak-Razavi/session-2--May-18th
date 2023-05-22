#include <stdio.h>

int main()
{
    int i, j,k ;
    int P[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0,
               2, 3, 5, 7, 3, 1, 0, 8, 9, 6,
               3, 4, 8, 9, 0, 7, 4, 6, 7, 5,
               5, 6, 7, 8, 9, 0, 2, 3, 4, 5,
               4,5,6,7,8,9,3,0,9,3,3,1,1,2,};

               printf("size of array p is %d\n\n",sizeof(P));

    int z= sizeof(P)/sizeof(P[0]);
    printf("%d\n", z);
    int F[10] = {0}; // Initialize F to 0

    for (j = 0; j < z; j++)
    {
        F[P[j]]++;
    }

    printf("vote\tFreq\t histogram\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t   %d\t", i, F[i]);
        for (k=0;k<F[i];k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}