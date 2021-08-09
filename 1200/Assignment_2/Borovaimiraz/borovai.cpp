#include <stdio.h>

struct information{
    int id ;
    char name[10];
    float totalGpa;
    float hsc;
    float ssc;
} information[20];

struct attributeInformation{
    char id [10];
    char name [10];
    char totalGpa[10];
    char hsc[10];
    char ssc[10];
} attribute [20];

int main ()
{

    int studentNumber = 5 ;
    FILE *file = fopen ("student_data.txt", "r");

    if (file == NULL)   printf("File not found \n"); 
  
    else 
    {
        printf("The file contains: \n");
        
        for (int i = 0; i < studentNumber ; i++){

                    for (int j = 0 ; j < 5 ; j ++)
                        {
                                if (j % 5 == 0)
                                    fscanf(file, "%s %d", &attribute[i].id,&information[i].id);
                                 else if (j % 5 == 1)
                                    fscanf(file, "%s %s", &attribute[i].name,&information[i].name);
                                 else if (j % 5 == 2)
                                     fscanf(file, "%s %f", &attribute[i].totalGpa,&information[i].totalGpa);            
                                 else if (j % 5 ==  3)
                                     fscanf(file, "%s %f", &attribute[i].hsc,&information[i].hsc);
                                 else if (j % 5 ==  4)
                                     fscanf(file, "%s %f", &attribute[i].ssc,&information[i].ssc);
                        }
             }
        }
    for (int i =0 ; i < studentNumber ; i ++)
    {
        printf ("%s %s\n",attribute[i].name,information[i].name);
        printf ("%s %d\n",attribute[i].id,information[i].id);
        printf ("%s %.2f\n",attribute[i].totalGpa,information[i].totalGpa);
        printf ("%s %.2f\n",attribute[i].ssc,information[i].ssc);
        printf ("%s %.2f\n\n",attribute[i].hsc,information[i].hsc);
    }

    FILE *total = fopen("total_gpa.txt","w");

    printf ("Total GPA Analysis\n");
    fprintf (total,"Total GPA Analysis\n");

    printf("================\n");
    fprintf(total,"================\n");

    printf("\n");
    fprintf(total,"\n");

    printf("Total GPA : 10.00\n");
    fprintf(total,"Total GPA : 10.00\n");

    printf("================\n");
    fprintf(total,"================\n");

    for (int j = 0 ; j < studentNumber ; j ++)
    {
        if (information[3].totalGpa == information[j].totalGpa)
        {
             printf("ID : %d   Name:%s\n",information[j].id,information[j].name);
            fprintf(total,"ID : %d   Name:%s\n",information[j].id,information[j].name);

        }       
               
    }

    fprintf(total,"\n");
    printf("\n");


    printf("Total GPA : 9.67\n");
    fprintf(total,"Total GPA : 9.67\n");

    printf("================\n");
    fprintf(total,"================\n");

    for (int i = 0 ; i < studentNumber ; i ++)
    {
        if ( information[4].totalGpa== information[i].totalGpa){
            printf("ID : %d   Name:%s\n",information[i].id,information[i].name);
            fprintf(total,"ID : %d   Name:%s\n",information[i].id,information[i].name);

        }     
                
    }

    printf("\n");
    fprintf(total,"\n");

    printf("Total GPA : 9.60\n");
    printf("================\n");

    fprintf(total,"Total GPA : 9.60\n");
    fprintf(total,"================\n");

    for (int j = 0 ; j < studentNumber ; j ++)
    {
        if (information[2].totalGpa== information[j].totalGpa){
             printf("ID : %d   Name:%s\n",information[j].id,information[j].name);
             fprintf(total,"ID : %d   Name:%s\n",information[j].id,information[j].name);

        }     
               
    }

    printf("\n");
    fprintf(total,"\n");

    printf("Total GPA : 9.55\n");
    printf("================\n");

    fprintf(total,"Total GPA : 9.55\n");
    fprintf(total,"================\n");

    for (int j = 0 ; j < studentNumber ; j ++)
    {
        if (information[0].totalGpa== information[j].totalGpa){
             printf("ID : %d   Name:%s\n",information[j].id,information[j].name);
             fprintf(total,"ID : %d   Name:%s\n",information[j].id,information[j].name);

        }       
               
    }

    printf("\n");
    fprintf(total,"\n");


    FILE *ssc = fopen("ssc_gpa.txt","w");

    printf ("SSC GPA Analysis\n");
    printf("================\n");

    fprintf (ssc,"SSC GPA Analysis\n");
    fprintf(ssc,"================\n");

    printf("\n");
    fprintf(ssc,"\n");

    printf("SSC GPA : 5.00\n");
    printf("================\n");

    fprintf(ssc,"SSC GPA : 5.00\n");
    fprintf(ssc,"================\n");

    for (int j = 0 ; j < studentNumber ; j ++)
    {
        if (information[3].ssc == information[j].ssc){
            printf("ID : %d   Name:%s\n",information[j].id,information[j].name);
            fprintf(ssc,"ID : %d   Name:%s\n",information[j].id,information[j].name);

        }    
                
    }

    printf("\n");
    fprintf(ssc,"\n");

    printf("SSC GPA : 4.60\n");
    printf("================\n");

    fprintf(ssc,"SSC GPA : 4.60\n");
    fprintf(ssc,"================\n");

    for (int j = 0 ; j < studentNumber ; j ++)
    {
        if (information[2].ssc == information[j].ssc)   {
            printf("ID : %d   Name:%s\n",information[j].id,information[j].name);
            fprintf(ssc,"ID : %d   Name:%s\n",information[j].id,information[j].name);

        }    
                
    }

    printf("\n");
    fprintf(ssc,"\n");

    printf("SSC GPA : 4.55\n");
    printf("================\n");

    fprintf(ssc,"SSC GPA : 4.55\n");
    fprintf(ssc,"================\n");

    for (int j = 0 ; j < studentNumber ; j ++)
    {
        if (information[1].ssc == information[j].ssc) {
            printf("ID : %d   Name:%s\n",information[j].id,information[j].name);
            fprintf(ssc,"ID : %d   Name:%s\n",information[j].id,information[j].name);

        }      
                
    }

    printf("\n\n");
    fprintf(ssc,"\n\n");

    FILE *hsc = fopen("hsc_gpa.txt","w");


    
    printf ("HSC GPA Analysis\n");
    printf("================\n");

    fprintf (hsc,"HSC GPA Analysis\n");
    fprintf(hsc,"================\n");

    printf("\n");
    fprintf(hsc,"\n");

    printf("HSC GPA : 5.00\n");
    printf("================\n");

    fprintf(hsc,"HSC GPA : 5.00\n");
    fprintf(hsc,"================\n");

    for (int j = 0 ; j < studentNumber ; j ++)
    {
        if (information[1].hsc == information[j].hsc)  {
            printf("ID : %d   Name:%s\n",information[j].id,information[j].name);
            fprintf(hsc,"ID : %d   Name:%s\n",information[j].id,information[j].name);

        }     
                
    }

    printf("\n");
    fprintf(hsc,"\n");

    printf("HSC GPA : 4.67\n");
    printf("================\n");

    fprintf(hsc,"HSC GPA : 4.67\n");
    fprintf(hsc,"================\n");

    for (int j = 0 ; j < studentNumber ; j ++)
    {
        if (information[4].hsc == information[j].hsc){
            printf("ID : %d   Name:%s\n",information[j].id,information[j].name);
            fprintf(hsc,"ID : %d   Name:%s\n",information[j].id,information[j].name);

        }       
                
    }
    printf("\n");
    printf("HSC GPA : 4.55\n");
    printf("================\n");

    fprintf(hsc,"\n");
    fprintf(hsc,"HSC GPA : 4.55\n");
    fprintf(hsc,"================\n");

    for (int j = 0 ; j < studentNumber ; j ++)
    {
        if (information[0].hsc == information[j].hsc) {
            printf("ID : %d   Name:%s\n",information[j].id,information[j].name);
            fprintf(hsc,"ID : %d   Name:%s\n",information[j].id,information[j].name);
        }      
                
    }
    printf("\n");
return 0;
}


                  