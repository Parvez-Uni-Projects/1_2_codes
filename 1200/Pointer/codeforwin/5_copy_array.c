#include <stdio.h>
int main()
{
    int len;
    printf("ENter the length of the array\n");
    scanf("%d",&len);
    int arr1[len],arr2[len];
    int *ptr1=arr1;
    int *ptr2=arr2;

    printf("Enter the element of the array\n"); 
    for (int i=0 ;i <len ;i++)  
    {
        scanf ("%d",&ptr1[i]);    
    }
    for (int i = 0 ;i <len ; i++)
    {
        ptr2[i]= ptr1[i];
    }
      
    for (int i=0 ;i <len ;i++)   
    {
        printf("%d 's address is %d\t", ptr2[i]-1,&ptr2[i]);// can also be done as printf("%d ", *ptr2-1);
    } 
}