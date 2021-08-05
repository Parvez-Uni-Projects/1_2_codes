#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int calculate_total_point (int,int);
 int calculate_position_point (int);


//declaring the team number for keeping the track of total team
int team_count = 0 ;

struct team_details 
{
    char team_name [20];
    int team_position ;
    int team_kill ;
    int total_point ;
    int team_position_point;
}  team[20];

// struct student_information
// {
//     int id ;
//     char name [10];
//     float total_gpa ;
//     float ssc_gpa;
//     float hsc_gpa;
// } student [7];

// 1. Scan the student_information from the file and store it in the structure 
// 2. Then build the logics
// 3. Print the outputs in 3 different file
// 4. Modify the original file also


 void get_team_details(int total_team_number)
 {

     for (int i =0 ;i <total_team_number ;i ++)

        {
            printf("Enter no  %d team information :\n",i+1);

            printf("Name :");
            scanf("%s",&team[i].team_name);
            fflush(stdin);

            printf ("Total kill : ");
            scanf("%d",&team[i].team_kill);
            fflush(stdin);

            printf ("Total position : ");
            scanf("%d",&team[i].team_position);
            fflush(stdin);

            team[i].total_point = calculate_total_point(team[i].team_kill,team[i].team_position);
            team[i].team_position_point = calculate_position_point(team[i].team_position);

            team_count++;


        }

 }

 int calculate_position_point (int team_position)
 {

     int first_position = 30;
     int second_position = 22;
     int third_position  = 16;
     int fourth_position = 12;
     int fifth_14th_position = (15 - team_position);
     int fifteenth_after_position = 0;

     if (team_position == 1)
        return    first_position;

    else if (team_position == 2)
        return    second_position;

    else if (team_position == 3)
        return    third_position;

    else if (team_position == 4)
        return    fourth_position;

    else if (team_position >= 5 && team_position <= 14)
        return    fifth_14th_position;

    else if (team_position >= 15)
        return    fifteenth_after_position;

 }

 int calculate_total_point (int team_kill , int team_position  )
 {

     int first_position = 30;
     int second_position = 22;
     int third_position  = 16;
     int fourth_position = 12;
     int fifth_14th_position = (15 - team_position);
     int fifteenth_after_position = 0;

     if (team_position == 1)
        return   ((team_kill * 2 ) + first_position);

    else if (team_position == 2)
        return   ((team_kill * 2 ) + second_position);

    else if (team_position == 3)
        return   ((team_kill * 2 ) + third_position);

    else if (team_position == 4)
        return   ((team_kill * 2 ) + fourth_position);

    else if (team_position >= 5 && team_position <= 14)
        return   ((team_kill * 2 ) + fifth_14th_position);

    else if (team_position >= 15)
        return   ((team_kill * 2 ) + fifteenth_after_position);
     
 }

 //* this is in a unsorted way so theres not gonna be any use of this 

void print_team_details(int total_team_number){


     printf(" \n\nPosition\t\tTeam name\t\tPosition Point\t\tkill Point\t\tTotal point\n");

     for (int i = 0 ; i < total_team_number ; i ++)
     {
         printf ("\t%d\t\t",team[i].team_position);
         printf ("%s\t\t",team[i].team_name);
         printf ("\t\t%d\t\t",team[i].team_position_point);
         printf ("\t%d\t\t",team[i].team_kill);
         printf ("\t%d \n\n",team[i].total_point);
     }

}

void print_sorted_team_details(int team_number){

         printf ("\t%d\t\t",team[team_number].team_position);
         printf ("%s\t\t",team[team_number].team_name);
         printf ("\t\t%d\t\t",team[team_number].team_position_point);
         printf ("\t%d\t\t",team[team_number].team_kill);
         printf ("\t%d \n\n",team[team_number].total_point);
}

int main (){

    int total_team_number;

    printf ("How many team is participated ? \n");
    scanf("%d",&total_team_number);

    get_team_details(total_team_number);
    //print_team_details(total_team_number);

    // printf(" \n\nPosition\t\tTeam name\t\tPosition Point\t\tkill Point\t\tTotal point\n");
    // print_sorted_team_details(0);

    return 0;
    
}