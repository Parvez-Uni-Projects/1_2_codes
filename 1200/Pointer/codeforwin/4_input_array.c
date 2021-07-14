#include <stdio.h>
int main ()
{
    int len;
    printf("ENter the length of the array\n");
    scanf("%d",&len);
    int arr[len];
    int *ptr=arr;

    printf("Enter the element of the array\n");
    // for (int i=0 ;i <len ;i++,ptr++)
    // {
    //     scanf("%d",ptr); 
    // }

     
    for (int i=0 ;i <len ;i++)    scanf("%d",&ptr[i]); 
    //! by doing these we are making sure that the pointer again points back to first array element  
    //! what is array notation bro ?  
    ptr = arr; 

    printf ("The array elements ");
    // for(int i=0 ;i <len ;i++,ptr++)
    // {
    //     printf("%d is situated at address %p \t",*ptr,ptr);    
    // }

    for(int i=0 ;i <len ;i++)  printf("%d is situated at address %d \t",ptr[i],&ptr[i]);    
   
    
    ptr =arr;
    int sum =0;

    for(int i=0 ;i <len ;i++,ptr++)
    {
        sum += *ptr;   
    }
    

    printf("\nThe sum is %d\n",sum);

    // printf ("The array elements ");
    // for(int i=0 ;i <len ;i++,ptr+=4)
    // {
    //     printf("%u\t",&ptr);
    // }




    return 0;
}