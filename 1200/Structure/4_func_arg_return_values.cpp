
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

    // Sending vectors as parameters just like int, char variables
    Vector add (Vector V1, Vector V2){

        Vector VS;
        VS.x = V1.x + V2.x;
        VS.y = V1.y + V2.y;

        // returns a vector
        return VS;
    }

int main(){
    // declaration of structure variable
    Vector V1;

    V1.x = 100.0;
    V1.y = 200.0;

    Vector V2(2.0, 4.0);

//    printf("Vector V1 has co-ordinates \n");
//    V1.prinVector();
//
//    printf("Vector V2 has co-ordinates \n");
//    V2.prinVector();

    Vector vs = add(V1, V2); // sending Vector variables as arguments and assigning the returned Vector to a Vector variable
    printf("Co-ordinates after addition: \n"); // x = 100 + 2 = 102; y = 200 + 4 = 204;
    vs.prinVector();

    return 0;

}





