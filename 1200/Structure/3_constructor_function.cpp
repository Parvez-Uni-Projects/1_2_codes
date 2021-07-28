#include <stdio.h>

typedef struct Vector Vector; // typedef will replace "struct Vector" definitions

struct Vector
{
    double x; //x co−ordinate
    double y; //y co−ordinate

    // Empty constructor functions so that we can declare variables like − "Vector V"
    Vector() {
        ;
    }

    // Parameterized constructor functions so that we can declare variables like − "Vector V(2.0, 3.0)"
    Vector(double _x, double _y) {
        x = _x;
        y = _y;
    }

    void prinVector()
    {
        printf("%lf %lf \n", x , y);
    }

};

int main(){
    // declaration of structure variable
    Vector V1;

    V1.x = 100.0;
    V1.y = 200.0;

    Vector V2(2.0, 3.0);

    printf("Vector V1 has co-ordinates \n");
    V1.prinVector();

    printf("Vector V2 has co-ordinates \n");
    V2.prinVector();

    return 0;

}




