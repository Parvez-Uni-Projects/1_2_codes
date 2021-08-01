#include<stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct Student Student;
typedef struct Teacher Teacher;
int i=0;
int j=0;
void logInSwitch();
//void logInAgain();
void editStudent();
struct Student
{
    int id;
    char name[30] ;
    char email[30];
    char pass[30];
    double cgpa;
} st[20] ;


struct teacher
{

    char name[30] ;
    char email[30];
    char pass[30];
    char designation[30];
} teach[20];
void teacherInfo()
{
    printf("enter teacher's info : \n");
    printf("Name :");
    gets(teach[j].name);
    printf("Email :");
    gets(teach[j].email);
    printf("pass :");
    gets(teach[j].pass);
    printf("Designation :");
    gets(teach[j].designation);
    fflush(stdin);
    j=j+1;
}
void studentInfo()
{
    printf("enter student's info : \n");

    printf("Name :");
    gets(st[i].name);
    printf("Email :");
    gets(st[i].email);
    printf("pass :");
    gets(st[i].pass);
    printf("cgpa :");
    scanf("%lf",&st[i].cgpa);
    fflush(stdin);
    st[i].id=i+1;
    i++;

}

void logInStudent()
{

    int choice1_2;

    fflush(stdin);
    printf("Email : ");
    char _email[20];
    gets(_email);
    fflush(stdin);
    printf("Password : ");

    char _pass[10];
    gets(_pass);



for(int n=0; n<=i; n++)
    {

    if(!strcmp(st[n].email,_email) && !strcmp(st[n].pass,_pass))
    {
        printf("log in successful !\n");
        printf("Options : \n 1.See details \n 2.Logout \n 3. Exit \n");
        printf("Enter Choice: ");
        scanf("%d",&choice1_2);
        switch(choice1_2)
        {
        case 1 :
        {
            printf("\nStudent Details : \n");
            printf("ID : %d \n",st[n].id);
            printf("Name : ");
            puts(st[n].name);
            printf("Email : ");
            puts(st[n].email);
            printf("Pass : ");
            puts(st[n].pass);
            printf("CGPA : %.2lf",st[n].cgpa);
            printf("\n");


            logInSwitch();
            break;

        }

        case 2:
        {
            logInSwitch();
            break;

        }
        case 3:
            exit (0) ;

        }
    }

    }

}

void logInTeacher()
{
    int choice1_3;

    fflush(stdin);
    printf("Email : ");
    char _email[10];
    gets(_email);
    fflush(stdin);
    printf("Password : ");

    char _pass[10];
    gets(_pass);

    for(int n=0; n<=j; n++)
    {
        if(!strcmp(teach[n].email,_email) && !strcmp(teach[n].pass,_pass))
        {
            jump :
            printf("log in successful !");
            printf("Options : \n 1.See all students \n 2.See all teachers \n 3.Edit \n 4.Logout \n 5.Exit \n");
            printf("Enter Choice: ");
            scanf("%d",&choice1_3);
            switch(choice1_3)
            {
            case 1 :
            {

                for(int n=0; n<i; n++)
                {


                    printf("Student Details : \n");
                    printf("ID : %d \n",st[n].id);
                    printf("Name : ");
                    puts(st[n].name);
                    printf("Email : ");
                    puts(st[n].email);
                    printf("CGPA : %.2lf",st[n].cgpa);


                }
                     break;

            }

            case 2:
            {
                for(int n=0; n<j; n++)
                {
                    printf("Teachers Detail %d : \n",n+1);

                    printf("Name : ");
                    puts(teach[n].name);
                    printf("Email : ");
                    puts(teach[n].email);
                    printf("Designation : ");
                    puts(teach[n].designation);
                    printf("\n");

                }
                break;

            }
            case 3:
                {editStudent();
                goto jump;

                break;
                }
            case 4:
                {logInSwitch();
                break;
                }
            case 5:
                exit(0);




            }
        }

    }
}





int main ()

{
    int sn,tn,choice1_2;
    int read1=1;
    int read2=1;
    printf("How many students : ");
    scanf("%d",&sn);
    printf("How many teachers : ");
    scanf("%d",&tn);
    fflush(stdin);
    while(read1<=sn)
    {
        studentInfo();
        read1++;
    }

    while(read2<=tn)
    {
        teacherInfo();
        read2++;
    }


    logInSwitch();
    printf("\n end");
}
void logInSwitch()
{
    printf("Log in as : \n 1. Student \n 2.Teacher\n");
    int choice1_1;
    printf("choice : ");
    scanf("%d",&choice1_1);

    switch (choice1_1)
    {
    case 1 :

        logInStudent();
        break;

    case 2 :
        logInTeacher();
        break;


    }
}
void editStudent()
{
    int n;
    printf("Enter the ID of the student you want to change : ");
    scanf("%d",&n);
    printf("enter the Name : ");
    fflush(stdin);
    gets(st[n-1].name);

}