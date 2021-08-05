#include <stdio.h>

struct details
{
    int x;
    int y;
} details[3];


int main(){
    // Read Part
    // syntax
    // FILE <file_pointer_variable> = fopen(<File_Path>, <mode>)
//    FILE *fp = fopen("data.txt", "r");

//    FILE *fp = fopen("./demo/data3.txt", "r");
//    FILE *fp = fopen("../File_demo/data2.txt", "r");

    FILE *fp = fopen("data.txt", "r"); // E:/data4.txt

    if (fp == NULL){
        printf("File not found \n"); // this will be printed if we change data.txt to data1.txt
    } else {
        printf("The file contains: \n");
        int x,y;
        for (int i = 0; i < 3 ; i++){
            // txt File reading syntax : fscanf()
            // Almost the same as scnaf() as it also takes input, but from file instead of console

            fscanf(fp, "%d %d", &x,&y);

            details[i].x = x;
            details[i].y = y;

            printf ("%d %d \n", x, y);

        }
        fclose(fp);
    }

printf(" \n\n");

    for (int i =0 ; i <3 ; i++)
    {
        printf(" x = %d ,y = %d \n",details[i].x,details[i].y);
    }

return 0;
}
