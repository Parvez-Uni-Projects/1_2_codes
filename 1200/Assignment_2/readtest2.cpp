#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float total_gpa_arr[20];
float hsc_gpa_arr[20];
float ssc_gpa_arr[20];

int unique_total_gpa;
int unique_hsc_gpa;
int unique_ssc_gpa;

struct details {
    int id ;
    char name [10];
    float total_gpa;
    float hsc_gpa;
    float ssc_gpa;

} details [20];

struct string_details{
    char id [10];
    char name [10];
    char total_gpa[10];
    char hsc_gpa[10];
    char ssc_gpa[10];
} string [20];

void file_scanner(int range)
{

    FILE *sf = fopen ("student_data.txt", "r");

     for (int i = 0; i < range ; i++){

            for(int j = 0 ; j <5 ; j ++ )
            {
                 switch (j)
                    {
                    case 0:
                    fscanf(sf, "%s %d", &string[i].id,&details[i].id);
                         break;

                    case 1:
                    fscanf(sf, "%s %s", &string[i].name,&details[i].name);
                         break;
                    
                    case 2:
                    fscanf(sf, "%s %f", &string[i].total_gpa,&details[i].total_gpa);
                        total_gpa_arr[i] = details[i].total_gpa;
                         break;
                    
                    case 3:
                    fscanf(sf, "%s %f", &string[i].hsc_gpa,&details[i].hsc_gpa);
                        hsc_gpa_arr[i] = details[i].hsc_gpa;
                         break;
                    
                    case 4:
                    fscanf(sf, "%s %f", &string[i].ssc_gpa,&details[i].ssc_gpa);
                        ssc_gpa_arr[i] = details[i].ssc_gpa;
                         break;
                    default:
                         break;
             }
            }
        }

        fclose(sf);
    
}

void file_data_printer(int range)
{

    for (int i =0 ; i < range ; i ++)
    {
        printf ("%s\t\t: %s\n",string[i].name,details[i].name);
        printf ("%s\t\t: %d\n",string[i].id,details[i].id);
        printf ("%s\t: %.2f\n",string[i].total_gpa,details[i].total_gpa);
        printf ("%s\t\t: %.2f\n",string[i].ssc_gpa,details[i].ssc_gpa);
        printf ("%s\t\t: %.2f\n\n",string[i].hsc_gpa,details[i].hsc_gpa);
    }

}

void total_gpa_analyzer(int number_of_students){

    FILE *total_file = fopen("total_gpa_analysis.txt","w");

   

    for (int i =0 ; i < unique_total_gpa ; i ++)

        {
            fprintf(total_file,"Total GPA : %.2f\n",total_gpa_arr[i]);
            fprintf(total_file,"================\n");
            for (int j = 0 ; j <number_of_students ;j ++  )
            {
                 
                 
                 if (total_gpa_arr[i] == details[j].total_gpa){
                     fprintf(total_file,"ID : %d   Name:%s\n",details[j].id,details[j].name);
                 }

            }
            fprintf(total_file,"\n\n");
           
        }


}

void ssc_gpa_analyzer(int number_of_students){
    FILE *ssc_file = fopen("ssc_gpa_analysis.txt","w");

     for (int i =0 ; i < unique_ssc_gpa ; i ++)
        {
            fprintf(ssc_file,"SSC GPA : %.2f\n",ssc_gpa_arr[i]);
            fprintf(ssc_file,"================\n");
            for (int j = 0 ; j <number_of_students ;j ++  )
            {
                 
                 
                 if (ssc_gpa_arr[i] == details[j].ssc_gpa){
                     fprintf(ssc_file,"ID : %d   Name:%s\n",details[j].id,details[j].name);
                 }

            }
            fprintf(ssc_file,"\n\n");
           
        }
}

void hsc_gpa_analyzer(int number_of_students){

    FILE *hsc_file = fopen("hsc_gpa_analysis.txt","w");

    for (int i =0 ; i < unique_hsc_gpa ; i ++)
        {
            fprintf(hsc_file,"HSC GPA : %.2f\n",hsc_gpa_arr[i]);
            fprintf(hsc_file,"================\n");
            for (int j = 0 ; j <number_of_students ;j ++  )
            {
                 
                 
                 if (hsc_gpa_arr[i] == details[j].hsc_gpa){
                     fprintf(hsc_file,"ID : %d   Name:%s\n",details[j].id,details[j].name);
                 }

            }
            fprintf(hsc_file,"\n\n");
           
        }   
}
void delete_duplicate_element(int range) 
{
    int range0= range;
    int range1 = range;
    int range2 = range;
    
    for(int i=0; i<range0; i++)
    {
        for(int j=i+1; j<range0; j++)
        {
            
            if(total_gpa_arr[i] == total_gpa_arr[j])
            {
               
                for(int k=j; k < range0 - 1; k++)
                {
                    total_gpa_arr[k] = total_gpa_arr[k + 1];
                }
                range0--;  
                j--;
            }
        }
    }
    
    for(int i=0; i<range1; i++)
    {
        for(int j=i+1; j<range1; j++)
        {
            
            if(hsc_gpa_arr[i] == hsc_gpa_arr[j])
            {
               
                for(int k=j; k < range1 - 1; k++)
                {
                    hsc_gpa_arr[k] = hsc_gpa_arr[k + 1];
                }
                range1--;  
                j--;
            }
        }
    }

    for(int i=0; i<range2; i++)
    {
        for(int j=i+1; j<range2; j++)
        {
            
            if(ssc_gpa_arr[i] == ssc_gpa_arr[j])
            {
               
                for(int k=j; k < range2 - 1; k++)
                {
                    ssc_gpa_arr[k] = ssc_gpa_arr[k + 1];
                }
                range2--;  
                j--;
            }
        }
    }
    unique_total_gpa = range0;
    unique_hsc_gpa   = range1;
    unique_ssc_gpa   = range2;

}

void sort_decreasing_order()
{

    float swap;

        for (int i= 0 ; i< unique_total_gpa - 1 ; i++)
            {
                for (int j = 0 ; j < unique_total_gpa - i- 1; j++)
                    {
                    if (total_gpa_arr[j] < total_gpa_arr[j+1]) 
                        {
                            swap       = total_gpa_arr[j];
                            total_gpa_arr[j]   = total_gpa_arr[j+1];
                            total_gpa_arr[j+1] = swap;
                         }
                    }
            }
        
        for (int i= 0 ; i< unique_ssc_gpa - 1 ; i++)
            {
                for (int j = 0 ; j < unique_ssc_gpa - i- 1; j++)
                    {
                    if (ssc_gpa_arr[j] < ssc_gpa_arr[j+1]) 
                        {
                            swap       = ssc_gpa_arr[j];
                            ssc_gpa_arr[j]   = ssc_gpa_arr[j+1];
                            ssc_gpa_arr[j+1] = swap;
                         }
                    }
            }
        
        for (int i= 0 ; i< unique_hsc_gpa - 1 ; i++)
            {
                for (int j = 0 ; j < unique_hsc_gpa - i- 1; j++)
                    {
                    if (hsc_gpa_arr[j] < hsc_gpa_arr[j+1]) 
                        {
                            swap       = hsc_gpa_arr[j];
                            hsc_gpa_arr[j]   = hsc_gpa_arr[j+1];
                            hsc_gpa_arr[j+1] = swap;
                         }
                    }
            }

//   printf("Sorted list in ascending order:\n");

//   for (int i = 0; i < unique_total_gpa; i++){
//     printf("%.2f\n", total_gpa_arr[i]);

//   }
//   printf("\n\n");
//   for (int i = 0; i < unique_hsc_gpa; i++){
    
//     printf("%.2f\n", hsc_gpa_arr[i]);
//   }

//   printf("\n\n");
//   for (int i = 0; i < unique_ssc_gpa; i++){

//     printf("%.2f\n", ssc_gpa_arr[i]);
//   }
     
    
}

int main ()
{

    int number_of_students = 5 ;
    FILE *sf = fopen ("student_data.txt", "r");

    if (sf == NULL){
        printf("File not found \n"); 
    } else {
        file_scanner (number_of_students);
        fclose(sf);
    }
    // printf(" \n\n");
    file_data_printer(number_of_students);

    delete_duplicate_element(number_of_students);
    sort_decreasing_order();
    
    total_gpa_analyzer(number_of_students);
    ssc_gpa_analyzer(number_of_students);
    hsc_gpa_analyzer(number_of_students);

    printf("\nUTG = %d UHG = %d USG = %d",unique_total_gpa,unique_hsc_gpa,unique_ssc_gpa);

return 0;
}