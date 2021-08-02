#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Defining all the functions

 void get_student_info(int);
 void get_teacher_info(int);

 void student_details(int);
 void student_details_for_teachers(int);

 void teacher_details(int);
 void teacher_edit();

 void login_options();
 void logout();
 void exit();

 void student_options(int);
 void teacher_options();

 void student_credentials();
 void teacher_credentials();

 void forgot_pass();

//declaring global variables for keeping the track of student & teacher number
int student_count=0;
int teacher_count=0;

//creating a structure which will store the student details
struct student_details
{
   char  s_name  [20];
   char  s_email [20];
   char  s_pass  [20];
   float s_cg  ;
   int   s_id  ;
   
}         student[20]; //this number indicates the number of data that can be stored

struct teacher_details
{
   char t_name           [20];
   char t_email          [20];
   char t_pass           [20];
   char t_designation    [20];
   int  t_id       ;
   
}                 teacher[20];

//creating a function to get all the student info 
void get_student_info(int student_number){

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
        scanf("%f",&student[i].s_cg);
        fflush(stdin);

        int id = 128; //initializing the id at 128 as the groups first roll
        student[i].s_id =id++;
        student_count++;
    }
}

//creating a function to get all the student info 
void get_teacher_info(int teacher_number){
 
    for (int i=0 ;i <teacher_number ;i++)
    {
        printf("Enter no %d teacher information :\n",i+1);

        printf("Name: ");
        scanf("%s",&teacher[i].t_name);
        fflush(stdin);

        printf("Email: ");
        scanf("%s",&teacher[i].t_email);
        fflush(stdin);

        printf("Pass: ");
        scanf("%s",&teacher[i].t_pass);
        fflush(stdin);

        printf("Designation: ");
        scanf("%s",&teacher[i].t_designation);
        fflush(stdin);

        int id = 1000;
        teacher[i].t_id=id++;
        teacher_count ++;
    }
}

//creating functions to print all the details
void student_details(int student_number){
        printf("\n Name     : %s",student[student_number].s_name);
        printf("\n Email    : %s",student[student_number].s_email);
        printf("\n Password : %s",student[student_number].s_pass);
        printf("\n CGPA     : %f",student[student_number].s_cg);
        printf("\n ID       : %d",student[student_number].s_id);
}

void student_details_for_teacher(int student_number){
        printf("\n Name     : %s",student[student_number].s_name);
        printf("\n Email    : %s",student[student_number].s_email);
        printf("\n CGPA     : %f",student[student_number].s_cg);
        printf("\n ID       : %d",student[student_number].s_id);
}

void teacher_details (int teacher_number){

        printf("\n Name        : %s",teacher[teacher_number].t_name);
        printf("\n Email       : %s",teacher[teacher_number].t_email);
        printf("\n Designation : %s",teacher[teacher_number].t_pass);
        printf("\n ID          : %d",teacher[teacher_number].t_id);
}

//creating a function to edit the student details
void teacher_edit(){
    int id;
    printf("\nEnter the ID of the student you want to edit");
    scanf("%d",&id);
    fflush(stdin);

    printf("\nEnter the name : ");
    scanf("%s",&student[id-128].s_name);
    teacher_options();
}

// The input options 
 void login_options(){

    int login_teach_student;
    printf("\nLogin as : \n1. Student\n2. Teacher\n");
    printf("Enter your choice : ");
    scanf("%d",&login_teach_student);

    if(login_teach_student == 1 )
    {
        student_credentials();
    }
      
    else if (login_teach_student == 2)
         teacher_credentials();
    else 
        printf("Enter a valid choice of 1 / 2");
 }

//creating a function to logout of the system
void logout(){
    printf("Logout successful");
    login_options();
}
//creating a function to exit from the process
void exit(){
    printf("Exit successful");
}

//creating a function to see the options of the student
void student_options(int student_number){

    int student_options;

    printf("\n\nOptions\n1. See Details\n2. Logout\n3. Exit\nEnter your choice: ");
    scanf("%d",&student_options);

    switch (student_options){
    case 1:
        printf("\n Student Details : \n");
        student_details(student_number);
        login_options();
        break;
    case 2:
        logout();
    case 3:
        exit();
    default:
        break;
    }
}
//creating a function to see the options for teacher
void teacher_options(){

    int teacher_options;

    printf("\n\nOptions\n1. See All Students\n2. See All Teachers\n3. Edit\n4. Logout\n5. Exit\nEnter your choice: ");
    scanf("%d",&teacher_options);

    switch (teacher_options)
    {
    case 1:
        for (int i =0 ; i < student_count ;i ++)
            {
                student_details_for_teacher(i);
            }
        break;
    case 2:
        for (int i =0 ; i < teacher_count ;i ++)
            {
                teacher_details(i);
            }
        break;
    case 3:
        teacher_edit();
        login_options();
        break;
    case 4:
        logout();
    case 5:
        exit();
    
    default:
        break;
    }
}

//creating a function to take the student credential and check them
void student_credentials (){

    char student_email[50] ,student_pass[50];
    int matched=0;

    printf("Log in as student \n");

    printf("Email : ");
    scanf("%s",&student_email);
    fflush(stdin);

    printf("Password : ");
    scanf("%s",&student_pass);
    fflush(stdin);

    int pass_comp=0;
    int email_comp=0;

    for (int i=0 ;i <=student_count ;i ++)
        {
            email_comp = strcmp(student[i].s_email ,student_email);
            pass_comp  = strcmp(student[i].s_pass ,student_pass);
        
            if (  (email_comp==0) && (pass_comp==0)  )
            {
                printf("Login successfull");
                student_options(i);
                break;
            } 
        }

        if (  (email_comp != 0) && (pass_comp != 0)  )
        {
            printf("Email and password didn't match\n1. Try again\n2. Exit\n3.Forgot Password");

            printf("\nEnter your choice\n");
            int choice;
            scanf("%d",&choice);
            if (choice == 1)
            login_options();
            else if (choice == 2 )
                exit();
            else if (choice == 3)
                forgot_pass(); 
        }
}

void forgot_pass(){

    int id;
    printf(" Enter your ID : ");
    scanf("%d",&id);

    printf("Who are you \n1. Student \n2.Teacher \n");
    int choice;
    printf("Enter your choice : ");
    scanf("%d",&choice);

    if ((student_count >= 1 ) || (teacher_count >= 1))

    {
        if (choice == 1 ){
        for (int i =0 ; i <student_count ; i++)
        {
            if (id == student[i].s_id);
            {
                printf("Your password is : %s",student[i].s_pass);
                printf("Your email    is : %s",student[i].s_email);

            }      
        }
        }

    else if (choice == 2){
        for (int i =0 ; i <teacher_count ; i++)
        {
            if (id == teacher[i].t_id);
            {
                printf("Your password is : %s",teacher[i].t_pass);
                printf("Your email    is : %s",teacher[i].t_email);

            }      
        }

        }
    }
    else 
        printf("\nNot sufficient student  or teacher");
}

//creating a function to take the teacher credential and check them

void teacher_credentials(){
    char teacher_email[50] ,teacher_pass[50];
    
    printf("Email : ");
    scanf("%s",&teacher_email);
    fflush(stdin);

    printf("Password : ");
    scanf("%s",&teacher_pass);
    fflush(stdin);

    for (int i=0 ;i <=teacher_count ;i ++)
        {

            int email_comp = strcmp(teacher[i].t_email ,teacher_email);
            int pass_comp  = strcmp(teacher[i].t_pass ,teacher_pass);
        
            if (  (email_comp==0) && (pass_comp==0)  )
            {
                printf("Login successfull");
                teacher_options();
                break;
            } 
        }   
}

// The main function lies here
int main(){

    // declaring the variables
    int login_teach_student;
    int input_student_number;
    int input_teacher_number;

    //Taking student and teacher number
    printf("How many Studnets : ");
    scanf("%d",&input_student_number);

    printf("How many Teachers : ");
    scanf("%d",&input_teacher_number);

    //calling the functions 
    get_student_info(input_student_number);
    get_teacher_info(input_teacher_number);
    login_options();
    printf("\nHave a nice time");
    return 0;
}

