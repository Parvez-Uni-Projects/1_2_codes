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
    Student(int _id, char *_name, double _cgpa)
    {
        id = _id;
        strcpy(name, _name);
        cgpa = _cgpa;
    }
};

int main(){

    // Create and write
    FILE *fp = fopen("student_database.txt", "w");
    Student student;

    for (int i = 0; i < 3; i++){
            // input:
            /*
                hasan 11 3.4
                ali 12 3.5
                jamal 13 3.6
            */
        scanf("%s %d %lf", student.name, &student.id, &student.cgpa);
        fprintf( fp, "%s %d %lf \n", student.name, student.id, student.cgpa);
    }
    fclose(fp);


    // Read
    fp = fopen("student_database.txt", "r");

    while (fscanf( fp, "%s %d %lf", student.name, &student.id, &student.cgpa)!= EOF){
        printf("%s %d %lf \n", student.name, student.id, student.cgpa);
    }
    fclose(fp);


    // Append
    fp = fopen("student_database.txt", "a");
    for (int i = 0; i < 3; i++){
             // input:
            /*
                kamal 14 3.7
                hossein 15 3.8
                fahim 16 3.9
            */
        scanf("%s %d %lf", student.name, &student.id, &student.cgpa);
        fprintf( fp, "%s %d %lf \n", student.name, student.id, student.cgpa);
    }
    fclose(fp);


    // Read
    fp = fopen("student_database.txt", "r");

    while (fscanf( fp, "%s %d %lf", student.name, &student.id, &student.cgpa)!= EOF){
        printf("%s %d %lf \n", student.name, student.id, student.cgpa);
    }
    fclose(fp);


return 0;
}
