#include <stdio.h>


int main()
{
    printf ("please enter your name\n");
    char name[10];
    scanf("%s",name);
    printf("your name is ""%s""\n", name);
    int N= sizeof (name)/sizeof(name[0]);
    printf("length of the array is %d\n", N);
    int M=0;
    int i;
    for (i=0; i<N; i++)
    {
        if (name[i]=='\0') break;
        M++;
    }
    printf("your name's length is : %d \n",M);

    return 0;
}
