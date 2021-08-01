#include <stdio.h>
#include <string.h>


typedef struct student_details student_details;
struct student_details
{
   char s_name  [10][20];
   char s_email [10][20];
   char s_pass  [10][20];
   char s_cg    [10][20];
   int  s_id    [10];
   
};

int main(){

    int login_teach_student;
    int input_student_number;
    int input_teacher_number;

    student_details stu_details;

    printf("How many Studnets : ");
    scanf("%d",&input_student_number);

    printf("How many Teachers : ");
    scanf("%d",&input_teacher_number);

    printf("Enter student information :\n");

    // for (int i=0 ;i <input_student_number ;i++)
    // {
    //    printf("Enter student Information :\nName: \n");
    //     scanf("%s",&stu_details.s_name[i]);
    //     printf("Email: \n");
    //     scanf("%s",&stu_details.s_email[i]);
    //     printf("Pass: \n");
    //     scanf("%s",&stu_details.s_pass[i]);
    //     printf("CG: \n");
    //     scanf("%lf",&stu_details.s_cg[i]);
    // }
     return 0;
}
