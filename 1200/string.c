#include <stdio.h>

int stringLength(char *ptr)
{
    int len=o;
    while (*ptr != '\0')
    {
        *ptr++;
        len;

    }
    return len;
}

int main ()
{
    char str[]="HEllo world";
    printf("Address of the first array element  = %d\n", &str[0]);
    printf("Value of the first array element %c=\n",*(str));
    printf("Address of the array =%d\n",str);

    int length= stringLength(str);
    printf("%d\n,length");

    for(int i=0 ;i <length ;i++)
    {
        
    }

    

    
}