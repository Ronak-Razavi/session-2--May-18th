#include <stdio.h>

int isPrime(int num);

int main()
{
    int a;
    printf("Please enter an integer: ");
    scanf("%d", &a);

    if (isPrime(a))
    {
        printf("%d is a prime number\n", a);
    }
    else
    {
        printf("%d is NOT a prime number\n", a);
    }

    return 0;
}

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
