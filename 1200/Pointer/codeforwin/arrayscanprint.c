#include <stdio.h>
int main ()
{
    int len;
    printf("ENter the length of the array\n");
    scanf("%d",&len);
    int arr[len];
    int *ptr=arr;
    printf("Enter the element of the array\n"); 
    for (int i=0 ;i <len ;i++)    scanf("%d",&ptr[i]); 
    ptr = arr; 
    for (int i=0 ;i <len ;i++)  printf("%d is situated at address %d \t",ptr[i],&ptr[i]);    
   
    
    

   

   



    return 0;
}