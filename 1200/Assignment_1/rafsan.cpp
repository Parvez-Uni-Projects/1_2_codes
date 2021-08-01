#include <stdio.h>

void student_info();
void teacher_info();
void student_credential();
void teacher_credential();

int main(){

    int login_option;
    int input_student;
    int input_teacher;


    printf("How many Studnets : ");
    scanf("%d",input_student);

    for (int i = 0 ; i < input_student;i++)
        {
            student_info();
        }

    printf("How many Teachers : ");
    scanf("%d",input_teacher);

    for (int i = 0 ; i < input_teacher;i++)
        {
            teacher_info();
        }


    printf("Login as : \n1. Student\n2. Teacher\n");
    scanf("%d",&login_option);

    if(login_option == 1 )
        student_credential();
    else if (login_option == 2)
        teacher_credential();

    return 0;
}
