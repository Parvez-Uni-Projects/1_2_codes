#include <stdio.h>

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

int main ()
{
    FILE *sf = fopen ("student_data_demo.txt", "r");

    if (sf == NULL)
        printf("File not found \n"); 
     else 
        printf("The file contains: \n");

        char id[10];
        int id_num;

        for (int i =0 ; i < 5; i++)
            {

                switch (i)
                    {
                    case 0:
                        fscanf(sf,"%s %d",&string[i].id, &details[i].id);
                        printf("Id = %s\tID num = %d",string[i].id,details[i].id);
                         break;

                    case 1:
                        fscanf(sf, "%s %d", &string[i].name,&details[i].name);
                         break;
                    
                    case 2:
                        fscanf(sf, "%s %d", &string[i].total_gpa,&details[i].total_gpa);
                         break;
                    
                    case 3:
                        fscanf(sf, "%s %d", &string[i].hsc_gpa,&details[i].hsc_gpa);
                         break;
                    
                    case 4:
                        fscanf(sf, "%s %d", &string[i].ssc_gpa,&details[i].ssc_gpa);
                         break;
                    default:
                         break;

                
            }    
    return 0;
}