#include <stdio.h>
#include "file_line.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

void file_handling_function(){

	file_scanner();

	 point_array_modified =sort_decreasing_order( delete_duplicate_element(point_array) );

	 FILE *fp = fopen (FILENAME2,"w");

	 if(fp==NULL)  printf("File \"%s\" does not exist!!!\n",FILENAME2);

   fprintf(fp,"Highest Scores \n");

   for (int i =0 ; i <total_user ;i ++) {

                     for	(int j = 0 ; j <total_user;j++)
                    {
                         if (point_array_modified[i] == details[j].point)
                            {
                              printf("%s %d\n",string_details[j].id,details[j].id);
         			            printf("%s %d\n",string_details[j].point,details[j].point);

                              fprintf(fp,"%s %d\n",string_details[j].id,details[j].id);
         			            fprintf(fp,"%s %d\n",string_details[j].point,details[j].point);
                            }
                    }
				}
	
}


int main (){

    file_handling_function();

	// for (int i =0 ; i <total_user ;i ++) {	
	// 				printf("%s %d\n",string_details[i].id,details[i].id);
    //      			printf("%s %d\n",string_details[i].point,details[i].point);
	// 			}

               

		
}