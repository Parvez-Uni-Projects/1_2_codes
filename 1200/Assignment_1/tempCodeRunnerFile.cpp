#include <stdio.h>
#include<string.h>

void student_details(){

    printf("Student Details: \nName : Abc \nEmail: haha \nCgpa =3.6\nId =2");

}

void see_all_students(){
    printf("There is no student brother");
}
void see_all_teachers(){
    printf("There is no teacher brother");
}

void teacher_edit(){
    printf("You have reached the edit function");
}

void logout(){
    printf("Logout successful");

}
void exit(){
    printf("Exit successful");

}
void student_options(){

    int student_options;

    printf("\n\nOptions\n1. See Details\n2. Logout\n3. Exit\nEnter your choice: ");
    scanf("%d",&student_options);

    switch (student_options)
    {
    case 1:
        student_details();
        break;
    case 2:
        logout();
    case 3:
        exit();
   
    default:
        break;
    }

}

void teacher_options(){

    int teacher_options;

    printf("\n\nOptions\n1. See All Students\n2. See All Teachers\n3. Edit\n4. Logout\n5. Exit\nEnter your choice: ");
    scanf("%d",&teacher_options);

    switch (teacher_options)
    {
    case 1:
        see_all_students();
        break;
    case 2:
        see_all_teachers();
        break;
    case 3:
        teacher_edit();
        break;
    case 4:
        logout();
    case 5:
        exit();
    
    default:
        break;
    }
}

void student_credential (){

    char student_email[50] ,student_pass[50];

    printf("Email : ");
    scanf("%s",student_email);
    printf("Password : ");
    scanf("%s",student_pass);

    if (strcmp(student_pass, "222") == 0 && strcmp(student_email,"parvez@aust.edu")==0)
    {
         printf("Log in successful !");
         student_options();

    }
       
    else 
        printf("Wrong password !\t No database bro remember your password ");

}

void teacher_credential(){
    char teacher_email[50] ,teacher_pass[50];
    
    printf("Email : ");
    scanf("%s",teacher_email);
    printf("Password : ");
    scanf("%s",teacher_pass);

    if (strcmp(teacher_pass, "222") == 0 && strcmp(teacher_email,"parvezsir@aust.edu")==0)
    {
         printf("Log in successful !");
         teacher_options();
    }
       
    else 
        printf("Wrong password !\t No database bro remember your password ");
}

int main(){

    int login_teach_student;

    printf("Login as : \n1. Student\n2. Teacher\n");
    printf("Enter your choice : ");
    scanf("%d",&login_teach_student);

    if(login_teach_student == 1 )
        student_credential();
    else if (login_teach_student == 2)
        teacher_credential();
    else 
        printf("Enter a valid choice of 1 / 2");

    return 0;
}

