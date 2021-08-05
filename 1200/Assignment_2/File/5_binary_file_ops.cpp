#include <stdio.h>
#include <string.h>

typedef struct Student Studnet;

struct Student
{
    int id;
    char name[20];
    double cgpa;

    Student (){
        ;
    }
    Studnet(int _id, char *_name, double _cgpa)
    {
        id = _id;
        strcpy(name, _name);
        cgpa = _cgpa;
    }
};

int main(){

    // Create and write
    // for writing to a file in binary mode , "wb" instead of "w"
    FILE *fp = fopen("student_database.bin", "wb");
    Student student;

    for (int i = 0; i < 3; i++){
            // input:
            /*
                hasan 11 3.4
                ali 12 3.5
                jamal 13 3.6
            */
        scanf("%s %d %lf", student.name, &student.id, &student.cgpa);

        // Write syntax: fwrite (reference to structure variable , size of memory chunk /  structure , how many chunk , file pointer )
        fwrite(&student, sizeof(student) , 1, fp);
//        printf("%d", sizeof(student));
    }
    fclose(fp);


    // Read
    // for reading from a file in binary mode , "rb" instead of "r"
    fp = fopen("student_database.bin", "rb");

    if (fp == NULL){
        printf("File Not Found \n");
    }
    else {
        // Read syntax: fread (reference to structure variable ,
        // size of memory chunk to be read at once ( in this case, size of the structure) , how many chunk (usually 1) , file pointer )

        // Both fread() and fwrite() returns the number of chunks written/read ( in the illustrated case, it is 1).
        // This fact is leveraged here in running while loop
        while (fread(&student, sizeof(student), 1, fp) == 1){
            printf("%s %d %lf \n", student.name, student.id, student.cgpa);
        }
    }
    fclose(fp);


    // Append
    fp = fopen("student_database.bin", "ab");
    for (int i = 0; i < 3; i++){
             // input:
            /*
                kamal 14 3.7
                hossein 15 3.8
                fahim 16 3.9
            */
        scanf("%s %d %lf", student.name, &student.id, &student.cgpa);
        fwrite(&student, sizeof(student), 1, fp);
    }
    fclose(fp);


    // Read
    // for reading from a file in binary mode , "rb" instead of "r"
    fp = fopen("student_database.bin", "rb");

    if (fp == NULL){
        printf("File Not Found \n");
    }
    else {
        // Read syntax: fread (reference to structure variable ,
        //size of memory chunk to be read at once ( in this case, size of the structure) , how many chunk (usually 1) , file pointer )

        // Both fread() and fwrite() returns the number of chunks written/read ( in the illustrated case, it is 1).
        // This fact is leveraged here in running while loop

//        printf("%d \n \n", sizeof(student));
        while (fread(&student, sizeof(student), 1, fp) == 1){
            printf("%s %d %lf \n", student.name, student.id, student.cgpa);
        }
    }
    fclose(fp);


return 0;
}

