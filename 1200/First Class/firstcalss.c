#include<stdio.h> 
int main() 
{ 
    int val = 32; 
    printf("Value of the variable = %d\n", val); 
    /* Reference operator = "&" (unary)*/ 
    printf("Address of the variable = %d\n", &val); 

    /* Pointer declaration */ 
    int *ptr; 
    ptr = &val; 
    /* Dereference operator = "*" ( unary )*/ 
    printf("Value of the pointer = %d\n", *ptr); 
    printf ("Address of the pointer = %d\n", ptr); 

    val = 10; 
    printf("Value of the pointer = %d\n", *ptr);
    printf ("Address of the pointer = %d\n" , ptr);

    /*Changing variable value by assigning through pointer*/
    *ptr = 100; 
    printf("Value of the variable = %d\n", val);

    /*When the address of variable val is assigned In pit. the following are true: 
    1. ptr is the same as &val 
    2. *ptr is treated the same as val*/ 

    return 0; 
}


