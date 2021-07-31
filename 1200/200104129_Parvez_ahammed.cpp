#include <stdio.h>
#include <stdlib.h>

int main (){
  int ST,choice,id;
  char email[50],pass[50];
  printf("Login as: \n 1.Student\n2.Teacher");
  scanf("%d",&ST);

  if (ST== 2)
  {
    printf("Email: ");
    gets(email);
    printf("Pass: ");
    gets(pass);
  }
  else if (ST == 1 )
  {
      printf("Email: ");
      gets(email);
      fflush(stdin);
      printf("Pass: ");
      gets(pass);
  }

  if(email == "xyz@xyz.com" && pass == "222")
  {
      printf("Login successful");
      printf("Options \n 1.See all students\n2.See all Teachers\n3.Edit Student\n4.Logout \n5.Exit");
      scanf("%d",&choice);
  }  
    else
        printf("You are dead");

    printf("Enter student ID : ");
    scanf("%d",&id);
    printf("Enter new name :");
    scanf("%d",&id);


  return 0;

}