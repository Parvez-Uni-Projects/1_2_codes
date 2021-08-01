#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//declaring global variables for keeping the track of student number
int student_count=0;
int teacher_count=0;

typedef struct student_details s_details; //!doing a typedef for time saving
//! creating a structure which will store the student details
struct student_details
{
   char s_name  [20];
   char s_email [20];
   char s_pass  [20];
   float s_cg   [20];
   int  s_id  ;
   
}        student[20];


//!creating a function to get all the student info 
void get_student_info(int student_number){

    s_details stu_details;

    for (int i=0 ;i <student_number ;i++)
    {
        printf("Enter no %d student information :\n",i+1);

        printf("Name: ");
        scanf("%s",&student[i].s_name);
        fflush(stdin);

        printf("Email: ");
        scanf("%s",&student[i].s_email);
        fflush(stdin);

        printf("Pass: ");
        scanf("%s",&student[i].s_pass);
        fflush(stdin);

        printf("CG: ");
        scanf("%lf",&student[i].s_cg);
        fflush(stdin);


        int id = 128;
        student[i].s_id =id++;
        student_count++;
    }
}

void student_credential (){

    char student_email[50] ,student_pass[50];
    int matched=0;
    printf("Log in as student \n");

    printf("Email : ");
    scanf("%s",&student_email);
    fflush(stdin);

    printf("Password : ");
    scanf("%s",&student_pass);
    fflush(stdin);

    puts(student_email);
    puts(student_pass);

    printf("Database info");
    puts(student[0].s_email);
    puts(student[0].s_pass);

    printf("%d",student_count);

    for (int i=0 ;i <=student_count ;i ++)
        {

            int email_comp = strcmp(student[i].s_email ,student_email);
            int pass_comp = strcmp(student[i].s_pass ,student_pass);
        
            if (  !email_comp && !pass_comp  )
            {
                printf("Login successfull");
            } 
        }
    

    

}

//! The main function lies here

int main(){

    //! declaring the variables
    int login_teach_student;
    int input_student_number;
    int input_teacher_number;

   //!defining the structures
    s_details stu_details;
    
    //! Taking student and teacher number
    printf("How many Studnets : ");
    scanf("%d",&input_student_number);

    //! calling the functions 
    get_student_info(input_student_number);

    student_credential();
    printf("\nThe function ends here");
    return 0;
}

