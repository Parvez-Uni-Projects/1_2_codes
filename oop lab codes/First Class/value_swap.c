#include<stdio.h> 
void swap_val(int, int);
void swap_ref(int *,int *);

void swap_val(int x, int y) 
{ 
    int temp = x; 
    x=y; 
    y=temp; 
    printf("After swaping using call by value\n%d\t%d\n",x,y);
} 
void swap_ref(int *x, int *y)
{
    int temp = *x;
    *x=*y;
    *y=temp; 
    printf("After swaping using call by reference\n%d\t%d\n",*x,*y); 
}

void main() 
{ 
    int a=100,b=200;

    printf("Initial value a: %d\t b:%d\n",a,b); 
    swap_val(a,b); 
    swap_ref(&a,&b); 
}

 


