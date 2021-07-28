#include <stdio.h>

typedef struct Vector Vector; // typedef will replace "struct Vector" definitions
typedef int this_is_int;

struct Vector
{
    double x; //x co−ordinate
    double y; //y co−ordinate

    void prinVector()
    {
        printf("%lf %lf \n", x , y);
    }

};

int main(){
    // declaration of structure variable
    Vector V;

    this_is_int x = 2;

    // value assignment
    V.x = 2.0;
    V.y = 3.0;

    printf("Vector V has co-ordinates \n");
    V.prinVector();

    printf("\n%d", x);

    return 0;

}



