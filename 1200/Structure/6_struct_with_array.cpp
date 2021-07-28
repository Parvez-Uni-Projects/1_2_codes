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

    Vector getScalarMultiple(double k){

        Vector V( x*k, y*k ); // declaring a new Vector whose x and y co-ordinates are scaled by a factor of k
        return V;
    }

    // The dot product of a vector with another one is returned here
    double getDotProduct (Vector V) {

        double product;
        product = x* V.x + y* V.y; // co-ordinates multiplication between the vector whose function was called and the vector who was passed as parameter

        return product;
    }

};


// Line Structure
typedef struct Line Line;
struct Line
{
    // start and end point
    Vector points[2]; // Array of structures as another structure's data

    Line(){
        ;
    }
    Line(Vector Start, Vector End) {
        points[0] = Start;
        points[1] = End;
    }

    void printLine(){
        printf("The line consists of: \n");
        for (int i=0; i<2; i++){
            printf("Point %d :", i+1);
            points[i].prinVector();
        }
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

    Vector V2(2.0, 3.0);

//    printf("Vector V1 has co-ordinates \n");
//    V1.prinVector();
//
//    printf("Vector V2 has co-ordinates \n");
//    V2.prinVector();

//    Vector vs = add(V1, V2); // sending Vector variables as arguments and assigning the returned Vector to a Vector variable
//    printf("Co-ordinates after addition: \n");
//    vs.prinVector();
//
//    printf("The dot product between V1 and V2 with factor is %lf \n", V1.getDotProduct(V2)); // 100 * 2 + 200 * 3 = 200 + 600 = 800
//
//    double k = 5.00;
//    printf("Getting the scalar multiple with factor %lf of Vector vs \n", k);
//    Vector scaled_vs = vs.getScalarMultiple(k); // x = 102*5 = 510; y = 203*5 = 1015
//    printf("Scaled co-ordinates: ");
//    scaled_vs.prinVector();
//
//    printf("Vector vs has unchanged co-ordinates: ");
//    vs.prinVector();

    Line L (V1, V2);
    L.printLine();



    return 0;

}







