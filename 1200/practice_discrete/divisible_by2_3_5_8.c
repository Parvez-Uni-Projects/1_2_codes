#include <stdio.h>

int main ()
{
    int j=0;
    for (int i = 1 ; i <= 100 ; i ++)
    {
        if (i %2 == 0  || i %3 == 0 || i%5 == 0 || i %8 == 0)
        {
            j++;
        }
    }

    printf("%d",j);

    
}