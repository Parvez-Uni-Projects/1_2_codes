#include <stdio.h>
void swap(int x,int y);
void swap_ref(int *x, int *y);
void main()
{ 
    int a = 100, b = 200;

    printf("a = %d \t b = %d\n", a, b); 
    swap(a, b); 
    printf("After using swapping by value     a= %d\tb= %d\n",a,b); //here we can see no change of value 
    //printf("%d \t %d\n", a, b);

    swap_ref(&a,&b); 

    printf("After using swapping by reference a= %d\tb= %d\n",a,b); //here we can see no change of value 
    //printf("%d \t %d\n", a, b);

   

}

void swap(int x, int y)
{ 
    int temp = x;
     x= y;
    y = temp;
    printf("In udf of call by value           a= %d\tb= %d\n", x, y); 
} 

void swap_ref(int *x, int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp; 
    printf("In udf of call by reference       a= %d\tb= %d\n",*x,*y); 
}
