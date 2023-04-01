/* get the gret number of  int  A B C*/
#include <stdio.h>

int main ()
{
    int A, B,C;

    printf("Enter A B and  C \n");

    scanf(" %d %d %d", &A , &B , &C);

    if(A>B)
    {
        if (A>C)
        {
            printf("A is largets \n");
        }
        else
        {
            printf("C the largest \n");
        }

    }

    else
    {
        if (B>C)
        {
            printf("B is largets \n");
        }
        else
        {
            printf("C the largest \n");
        }

    }

}
