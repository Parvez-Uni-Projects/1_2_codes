#include <stdio.h>
int main ()
{
    int len;

    printf("ENter the length of the arrays\n");
    scanf("%d",&len);

    int src_arr[len],dest_arr[len];
    int *src_ptr=src_arr ,*dest_ptr=dest_arr;
    
    printf("Enter the element of the source array\n"); 
    for (int i=0 ;i <len ;i++)    scanf("%d",&src_ptr[i]); 
    printf("Enter the element of the destination array\n"); 
    for (int i=0 ;i <len ;i++)    scanf("%d",&dest_ptr[i]); 
}