#include<stdio.h>
void main()

{
    int i =101;
    int* ptr;
    ptr = &i;
    
    printf("output of i     %d\n", i); // 101 
    printf("output of ptr   %d\n", ptr); //20000 
    printf("output of &i    %d\n", &i); //20000 
    printf("output of &ptr  %d\n", &ptr); //3000 
    printf("output of *ptr  %d\n", *ptr); //101 
    printf("output of *(&i) %d\n", *(&i)); //101 


}
