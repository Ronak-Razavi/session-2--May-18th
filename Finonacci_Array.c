#include <stdio.h>
#define N 10


int main()
{
    int F [N];

    //initialize condition
    F[0]=0;
    F[1]=1;

    int i;
    for (i=2; i<N; i++)
    {
        F[i]=F[i-1]+F[i-2];
    }

    for (i=0; i<N; i++)
    {
        printf("F[%d]=%d\n", i, F[i]);
    }
    printf("\n");

    return 0;
}