#include<iostream>
using namespace std;
#define FILENAME "user_data.txt"



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
int total_lines =file_line_counter()+1;  //for here adding 1 to get the perfect amount of line else it skips one line
int total_user = total_lines / total_attributes;  // we can get user number by this formula
