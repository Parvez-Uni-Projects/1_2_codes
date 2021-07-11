#include <stdio.h>
int main ()
{
    char ch='c';
    int num = 1;
    int* ptr = &num;
    float num2 = 10.4000;
    long long bigint =98989898;


    printf("Value of the character = %c , Address of character = %u\n",ch ,&ch);
    printf("Value of the integer   = %d , Address of integer = %u \n",num),&num;
    printf("Value of the real   = %f , Address of real = %u\n",num2,&num2);
    printf("Value of the biginteger  = %lld , Address of real = %u\n",bigint,&bigint);

    printf("Address of ptr = %u\n",&ptr); //this is the address of the variable that is holding another address of a variable so its just the second layer of memory address 
    printf("Value of ptr =%u\n",ptr);//the ptr variable is holding a address of a variable 
    printf("Value pointed by ptr = %d",*ptr); //by * we are getting the value that is stored in that specific address



    
}