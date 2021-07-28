#include <stdio.h>

struct Vector
{
    double x; //x co−ordinate
    double y; //y co−ordinate
};

int main(){
    // declaration of structure variable
    struct Vector V;

    // value assignment
    V.x = 2.0;
    V.y = 3.0;

    // get values from structure data
    printf("Vector V has co-ordinates %lf %lf \n", V.x, V.y);


    return 0;
}


