#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main()
{
    int a;
    printf("Please enter an integer: ");
    scanf("%d", &a);
    int prime = TRUE;
    int i;

    if (a <= 1)
    {
        prime = FALSE;
    }
    else
    {
        for (i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                prime = FALSE;
                break;
            }
        }
    }

    if (prime)
    {
        printf("%d is a prime number\n", a);
    }
    else

    {
        printf("%d is NOT a prime number\n", a);
    }

    return 0;
}