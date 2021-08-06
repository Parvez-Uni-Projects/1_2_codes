#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
                         break;
                    
                    case 3:
                    fscanf(sf, "%s %f", &string[i].hsc_gpa,&details[i].hsc_gpa);
                         break;
                    
                    case 4:
                    fscanf(sf, "%s %f", &string[i].ssc_gpa,&details[i].ssc_gpa);
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

    for (int i =0 ; i < 7 ; i ++)
    {
        printf ("%s\t\t: %s\n",string[i].name,details[i].name);
        printf ("%s\t\t: %d\n",string[i].id,details[i].id);
        printf ("%s\t: %.2f\n",string[i].total_gpa,details[i].total_gpa);
        printf ("%s\t\t: %.2f\n",string[i].ssc_gpa,details[i].ssc_gpa);
        printf ("%s\t\t: %.2f\n\n",string[i].hsc_gpa,details[i].hsc_gpa);
    }

}

void total_gpa_analyzer(int range){


    printf ("For Bangla Medium: \n");
    printf ("===================\n");
    for (int i = 0 ; i < range ; i ++)
    {
        int hsc_gpa_comp = strcmp(string[i].hsc_gpa,"hsc");
        if (hsc_gpa_comp == 0)
            {
                //printf(" You have done it.   string is %s \n",string[i].hsc_gpa);
                printf("ID : %d   Name:%s\n",details[i].id,details[i].name);
            }
    }

    printf("\n\n");

    printf ("For English Medium: \n");
    printf ("===================\n");
    for (int i = 0 ; i < range ; i ++)
    {
        int hsc_gpa_comp = strcmp(string[i].hsc_gpa,"Alevel");
        if (hsc_gpa_comp == 0)
            {
                //printf(" You have done it.   string is %s \n",string[i].hsc_gpa);
                printf("ID : %d   Name:%s\n",details[i].id,details[i].name);
            }
    }

}

void ssc_gpa_analyzer(int range){
    
    printf ("For Bangla Medium: \n");
    printf ("===================\n");
    for (int i = 0 ; i < range ; i ++)
    {
        int hsc_gpa_comp = strcmp(string[i].hsc_gpa,"hsc");
        if (hsc_gpa_comp == 0)
            {
                printf("ID : %d   Name:%s\n",details[i].id,details[i].name);
            }
    }

    printf("\n\n");

    printf ("For English Medium: \n");
    printf ("===================\n");
    for (int i = 0 ; i < range ; i ++)
    {
        int hsc_gpa_comp = strcmp(string[i].hsc_gpa,"Alevel");
        if (hsc_gpa_comp == 0)
            {
               
                printf("ID : %d   Name:%s\n",details[i].id,details[i].name);
            }
    }
}

void hsc_gpa_analyzer(int range){

    FILE *sf = fopen("hsc_gpa_analysis.txt","w");
    
    //printf ("For Bangla Medium: \n");
    
    //printf ("===================\n");
    fprintf(sf,"For Bangla Medium: \n");
    fprintf (sf,"===================\n");
    for (int i = 0 ; i < range ; i ++)
    {
        int hsc_gpa_comp = strcmp(string[i].hsc_gpa,"hsc");
        if (hsc_gpa_comp == 0)
            {
                //printf("ID : %d   Name:%s\n",details[i].id,details[i].name);
                fprintf(sf,"ID : %d   Name:%s\n",details[i].id,details[i].name);
            }
    }

    printf("\n\n");

    // printf ("For English Medium: \n");
    // printf ("===================\n");
    fprintf(sf,"For English Medium: \n");
    fprintf (sf,"===================\n");
    for (int i = 0 ; i < range ; i ++)
    {
        int hsc_gpa_comp = strcmp(string[i].hsc_gpa,"Alevel");
        if (hsc_gpa_comp == 0)
            {
               
                //printf("ID : %d   Name:%s\n",details[i].id,details[i].name);
                fprintf(sf,"ID : %d   Name:%s\n",details[i].id,details[i].name);
            }
    }
}

int main ()
{

    int number_of_students = 7 ;
    FILE *sf = fopen ("student_data.txt", "r");

    if (sf == NULL){
        printf("File not found \n"); 
    } else {
        printf("The file contains: \n");
        file_scanner (number_of_students);
        fclose(sf);
    }
    printf(" \n\n");
    //file_data_printer(number_of_students);
    //total_gpa_analyzer(number_of_students);
    //ssc_gpa_analyzer(number_of_students);
    hsc_gpa_analyzer(number_of_students);

}