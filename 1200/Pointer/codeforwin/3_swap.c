#include <stdio.h>
void norm_swap(int num1,int num2);
void swap(int *num1,int *num2);
int main ()
{
    int num1=2,num2=4;
    int *ptr1,*ptr2;

    ptr1=&num1;
    ptr2=&num2;

    printf("values before swapping\n");
    printf("Num1 = %d address = %u ,Num2=%d address = %u\n\n",num1,&num1,num2,&num2);

    norm_swap(num1,num2);

    printf("Address of num1 = %u ,num2 = %u after normal swap...no change of address in main function...\n",&num1,&num2);
    printf("Value   of num1 = %d ,num2 = %d after normal swap...no change of value in main function...\n\n",num1,num2);

    printf("Passing the address of num1 = %u num2=%u in pointer UDF\n\n",&num1,&num2);
    swap(ptr1,ptr2);


    printf("values in main function after swapping\n");
    printf("Num1 = %d address = %u ,Num2=%d address = %u\n\n",num1,&num1,num2,&num2);   
}

void swap(int *num1,int *num2){

    int temp0 = *num1;
    *num1 = *num2;
    *num2=temp0;

    printf("values in pointer swapping\n");
    printf("Num1 = %d address = %u ,Num2=%d address = %u\n",*num1,&num1,*num2,&num2);//here
    printf("Why is the memory location same as the normal swapping?\n\n"); 
}

void norm_swap(int num11,int num12){
    int temp =num11;
    num11 =num12;
    num12 =temp;

    printf("values in normal swap... will create new memory location....\n"); //normal swap assigns them in new location 
    printf("Num1 = %d address = %u ,Num2=%d address = %u \n\n",num11,&num11,num12,&num12);


}