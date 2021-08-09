#include <stdio.h>

#define MAX_SIZE 100

int unique_total_gpa;
int unique_ssc_gpa;
int number_of_students=10;
float *array_total;

float arr[10] = {10,1,100,10,1,2.5,3.4,4,5,10};

float *delete_duplicate_element( float *arr ,int option )
{
    int size = number_of_students;
    
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            
            if(arr[i] == arr[j])
            {
               
                for(int k=j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;  
                j--;
            }
        }
    }

    switch (option)
    {
    case 1:
         unique_total_gpa = size;
        break;
    case 2:
         unique_ssc_gpa = size;
        break;
    
    default:
        break;
    }
 
  return arr;
    
}

int main()
{           
    array_total = delete_duplicate_element(arr,1);


    printf("\nin main func\n");
    for(int i=0; i<unique_total_gpa; i++)
    {
        printf("%.2f\t", array_total[i]);
    }
    
    return 0;
}


