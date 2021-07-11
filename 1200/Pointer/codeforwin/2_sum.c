#include <stdio.h>
int main ()
{
    int num1=10,num2=20,sum,diff,prod,quo;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;

    sum  = *ptr1 + *ptr2;
    diff = *ptr1 - *ptr2;
    prod = (*ptr1) * (*ptr2);
    quo = *ptr1 % *ptr2;

    
    
    printf("The sum is %d\n",sum);
    printf("Difference %d\n",diff);
    printf("Product    %d\n",prod);
    printf("Quotient   %d\n",quo);

    return 0;

}