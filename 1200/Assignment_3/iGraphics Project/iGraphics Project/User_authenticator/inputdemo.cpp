#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "file_line.h" //this header file counts the lines in a file and according to that creates some variables

void file_scanner();
void file_data_printer();

struct details {
    int id ;
    char name [10];
} details [20];

struct string_details{
    char id [10];
    char name [10];
} string_details [20];


void file_scanner()  //scans the data of the file
{
    FILE *user_file = fopen ("user_data.txt", "r");

     for (int i = 0; i < total_user ; i++){ 
                 
                    fscanf(user_file, "%s %d", &string_details[i].id,&details[i].id);
                    fscanf(user_file, "%s %s", &string_details[i].name,&details[i].name);                  
        }
        fclose(user_file); 
}

void file_data_printer()  //prints the data of the file
{
    for (int i =0 ; i < total_user ; i ++)
    {
        printf ("%s\t\t%d\n",string_details[i].id,details[i].id);
        printf ("%s\t\t%s\n",string_details[i].name,details[i].name); 
    }
}

int user_authenticator ()  //checking if the user is new or old return a true or false value
{   
    char user_name[10];
    int old_user_value = 0;
    printf("Enter your user name : \n");
    scanf ("%s",&user_name);
    
    for (int i = 0 ; i < total_user ; i++)
        {
            int string_match = strcmp(details[i].name,user_name);

            if(string_match == 0)   old_user_value = 1;     
        }
        
        if (!old_user_value)
            {
                FILE *user_file = fopen("user_data.txt","a");
                fprintf(user_file,"\nID %d",total_user+1);
                total_user++;
                fprintf(user_file,"\nName %s",user_name);
            }

        return old_user_value;
}

int main ()
{ 
    FILE *user_file = fopen ("user_data.txt", "r");  //opening the file in reading mode

    if (user_file == NULL){
        printf("File not found \n");
    } else {
        file_scanner ();   //if the file is not null then scanning the file
        fclose(user_file);
    }
    //file_data_printer();  // prints the data of the file in the console

    //int old_user = user_authenticator();  //return true ot false value 
    //printf("%d\n",old_user); 

    printf("%d\n",total_user);

    //if (old_user)  printf("Old user\n");  //determines a user is new or old
    //else           printf("New user\n");
return 0;
}
