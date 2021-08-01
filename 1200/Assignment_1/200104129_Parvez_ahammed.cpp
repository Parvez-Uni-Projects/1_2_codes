#include <stdio.h>
#include<string.h>

typedef struct student_details s_details;
struct student_details
{
   char s_name  [10][20];
   char s_email [10][20];
   char s_pass  [10][20];
   char s_cg    [10][20];
   int  s_id    [10];
   
};

typedef struct teacher_details t_details;
struct teacher_details
{
   char t_name           [10][20];
   char t_email          [10][20];
   char t_pass           [10][20];
   char t_designation    [10][20];
   int  t_id             [10];
   
};


void get_student_info(int student_number){

    s_details stu_details;

    for (int i=0 ;i <student_number ;i++)
    {
        printf("Enter no %d student information :\n",i+1);

        printf("Name: ");
        scanf("%s",&stu_details.s_name[i]);
        fflush(stdin);

        printf("Email: ");
        scanf("%s",&stu_details.s_email[i]);
        fflush(stdin);

        printf("Pass: ");
        scanf("%s",&stu_details.s_pass[i]);
        fflush(stdin);

        printf("CG: ");
        scanf("%lf",&stu_details.s_cg[i]);
        fflush(stdin);


        int id = 128;
        stu_details.s_id[i] =id;
        printf ("Student id is %d\n\n",id);
        id++;
    }
}
void get_teacher_info(int teacher_number){
    t_details tea_details;

    for (int i=0 ;i <teacher_number ;i++)
    {
        printf("Enter no %d teacher information :\n",i+1);

        printf("Name: ");
        scanf("%s",&tea_details.t_name[i]);
        fflush(stdin);

        printf("Email: ");
        scanf("%s",&tea_details.t_email[i]);
        fflush(stdin);

        printf("Pass: ");
        scanf("%s",&tea_details.t_pass[i]);
        fflush(stdin);

        printf("Designation: ");
        scanf("%lf",&tea_details.t_designation[i]);
        fflush(stdin);

        int id = 100;
        tea_details.t_id[i] =id;
        printf ("Teacher id is %d\n\n",id);
        id++;
    }

}

// void student_details(){

//     printf("Student Details: \nName : Abc \nEmail: parvez@aust.edu\npass: 222 \nCgpa =3.6\nId =2");

// }


// void see_all_students(){
//     printf("There is no student brother");
// }
// void see_all_teachers(){
//     printf("There is no teacher brother");
// }

// void teacher_edit(){
//     printf("You have reached the edit function");
// }

// void logout(){
//     printf("Logout successful");

// }
// void exit(){
//     printf("Exit successful");

// }
// void student_options(){

//     int student_options;

//     printf("\n\nOptions\n1. See Details\n2. Logout\n3. Exit\nEnter your choice: ");
//     scanf("%d",&student_options);

//     switch (student_options)
//     {
//     case 1:
//         student_details();
//         break;
//     case 2:
//         logout();
//     case 3:
//         exit();
   
//     default:
//         break;
//     }

// }

// void teacher_options(){

//     int teacher_options;

//     printf("\n\nOptions\n1. See All Students\n2. See All Teachers\n3. Edit\n4. Logout\n5. Exit\nEnter your choice: ");
//     scanf("%d",&teacher_options);

//     switch (teacher_options)
//     {
//     case 1:
//         see_all_students();
//         break;
//     case 2:
//         see_all_teachers();
//         break;
//     case 3:
//         teacher_edit();
//         break;
//     case 4:
//         logout();
//     case 5:
//         exit();
    
//     default:
//         break;
//     }
// }

typedef struct grand_total grand_total;
struct grand_total
{
    int s_number;
    int t_number;

};
void student_credential (){

    char student_email[50] ,student_pass[50];
    int matched=0;

    grand_total gt;
    s_details stu_details;

    printf("Log in as student \n");

    printf("Email : ");
    scanf("%s",&student_email);
    fflush(stdin);

    printf("Password : ");
    scanf("%s",&student_pass);
    fflush(stdin);

    printf("%s\t",student_pass);
    printf("%s\t",student_email);

    printf("\nhola buddy");

    //printf("\n\n\t\t%s",stu_details.s_email[0]);

    // for (int i=0 ;i <gt.s_number ;i ++)
    //     {
    //         if (strcmp(student_email,stu_details.s_email[i]) == 0 && strcmp(student_pass,stu_details.s_pass[i]) == 0 )
    //         {
    //             matched == 1;
    //         }
    //         else
    //         {
    //             matched = 0;
    //         }

    //     }

    //     printf("%d",matched);

    // if (matched)
    // {
    //      printf("Log in successful !");
    //      //student_options();

    // }
       
    // else if (matched) 
    //     printf("Wrong password !\t No database bro remember your password ");
    // else
    //     printf("Bu ha ha");

}

void teacher_credential(){
    char teacher_email[50] ,teacher_pass[50];
    
    printf("Email : ");
    scanf("%s",&teacher_email);
    printf("Password : ");
    scanf("%s",&teacher_pass);

    // if (strcmp(teacher_pass, "222") == 0 && strcmp(teacher_email,"parvezsir@aust.edu")==0)
    // {
    //      printf("Log in successful !");
    //      teacher_options();
    // }
       
    // else 
    //     printf("Wrong password !\t No database bro remember your password ");
}

int main(){

    int login_teach_student;
    int input_student_number;
    int input_teacher_number;

   
    s_details stu_details;
    grand_total gt;
    t_details tea_details;



    printf("How many Studnets : ");
    scanf("%d",&input_student_number);

    printf("How many Teachers : ");
    scanf("%d",&input_teacher_number);

    gt.s_number =input_student_number;
    gt.t_number = input_teacher_number;



    get_student_info(input_student_number);
    get_teacher_info(input_teacher_number);


    printf("\nLogin as : \n1. Student\n2. Teacher\n");
    printf("Enter your choice : ");
    scanf("%d",&login_teach_student);

    if(login_teach_student == 1 )
      student_credential();
    else if (login_teach_student == 2)
         teacher_credential();
    else 
        printf("Enter a valid choice of 1 / 2");


    printf("\n\n%s",stu_details.s_email[0]);

    return 0;
}

