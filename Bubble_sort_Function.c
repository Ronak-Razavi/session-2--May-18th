#include <stdio.h>
#include <stdlib.h>
 void bubblesort(int a[],int N);
 void printArray(int a[],int N);

int main()
{
    int a[]= {23,54,86,45,26,17,23,23,56,17,37,45,19,25,90,43,65};

    int N= sizeof (a)/sizeof(a[0]);
    printf("Array before sort:\n");
    printArray (a,N);

    bubblesort(a,N);

    printf("\n\n");

    printf("Array after sort:\n");
    printArray (a,N);
    return 0;
}


    void bubblesort(int a[],int N)
    {
        int i,j;


        for (i=0;i<N;i++)
        {   int swap =0;
            for(j=0; j<N-1;j++)
            if (a[j]> a [j+1])
              {
                swapfunc(a,j, j+1);
                swap =1;
              }
            if (!swap)break;
        }

    }

void swapfunc (int a[], int j1, int j2)
{
    int temp;
    temp = a [j1];
    a[j1]=a[j2];
    a[j2]=temp;

}


void printArray(int a[],int N)
{
    int i;
    for (i=0;i<N;i++)
    {
        printf("%d", a[i]);
        if (i<N-1)
        {
            printf(", ");
        }
    }
}
