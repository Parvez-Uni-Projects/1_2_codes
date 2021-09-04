#include<iostream>
using namespace std;

#include <string.h>
#define FILENAME "user_data.txt"
#define FILENAME2 "high.txt"

int *delete_duplicate_element(int*);
int *sort_decreasing_order(int*);
int point_array[20];
int *point_array_modified;

int file_line_counter(){  // counts the line of a file
FILE *fp;
   char ch;
   int linesCount=0;
   //open file in read more
   fp=fopen(FILENAME,"r");
   if(fp==NULL) {
      printf("File \"%s\" does not exist!!!\n",FILENAME);
      return -1;
   }
   //read character by character and check for new line
   while((ch=fgetc(fp))!=EOF) {
      if(ch=='\n')
         linesCount++;
   }
   //close the file
   fclose(fp);
   //print number of lines
   return linesCount;

}
int total_attributes =2;  //here this is the number of attributes lik id and name here
int total_lines =file_line_counter() + 1;  //for here adding 1 to get the perfect amount of line else it skips one line
int total_user = total_lines /total_attributes ;  // we can get user number by this formula

struct user_details{
   int id;
   int point;
} details[20];

struct user_string{
   char id[10];
   char point[10];
} string_details[20];



void file_scanner(){
   FILE *fp = fopen (FILENAME,"r");

   if(fp==NULL)  printf("File \"%s\" does not exist!!!\n",FILENAME);

   else{
      for (int i =0 ; i <total_user;i ++)
      {
         fscanf(fp, "%s %d",&string_details[i].id,&details[i].id);
         fscanf(fp, "%s %d",&string_details[i].point,&details[i].point);
         point_array[i]= details[i].point;
      }
   }

}


int *sort_decreasing_order(int *array){

   int swap;
   int range = total_user;
   for (int i= 0 ; i< range - 1 ; i++)
            {
                for (int j = 0 ; j < range - i- 1; j++)
                    {
                    if (array[j] < array[j+1]) 
                        {
                            swap       = array[j];
                            array[j]   = array[j+1];      // using bubble sort to sort the array 
                            array[j+1] = swap;
                         }
                    }
            }
        return array; 
}

int *delete_duplicate_element(int *array){
   int range = total_user;

   for(int i=0; i<range; i++)
    {
        for(int j=i+1; j<range; j++)
        {   
            if(array[i] == array[j])
            {
               
                for(int k=j; k < range - 1; k++)
                {
                    array[k] = array[k + 1];
                }
                range--;  
                j--;
            }
        }
    }
    
    return array ;

}

void highest_score_printer(){

  

   FILE *fp = fopen (FILENAME2,"w");

   if(fp==NULL)  printf("File \"%s\" does not exist!!!\n",FILENAME2);

   fprintf(fp,"Highest Scores \n");

   for (int i =0 ; i <total_user ;i ++) {

                     for	(int j = 0 ; j <total_user;j++)
                    {
                         if (point_array_modified[i] == details[j].point)
                            {
                              // printf("%s %d\n",string_details[j].id,details[j].id);
         			            // printf("%s %d\n",string_details[j].point,details[j].point);

                              fprintf(fp,"%s %d\n",string_details[j].id,details[j].id);
         			            fprintf(fp,"%s %d\n",string_details[j].point,details[j].point);
                            }
                    }
				}
}



