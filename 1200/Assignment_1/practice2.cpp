#include <stdio.h>

typedef struct email_list email_list;

struct email_list
{
    char t_email [10][20];
    char s_email [10][20];

};

int main (){

    email_list e;

    printf("Enter two email : \n");

    for (int i = 0 ; i<2 ;i++)
        {
            scanf("%s",&e.t_email[i]);
        }

    printf("The emails are : \n");
    for(int i =0 ; i <2 ;i++)
        {
            printf("No %d email is %s\n",i+1,e.t_email[i]);
        }
}