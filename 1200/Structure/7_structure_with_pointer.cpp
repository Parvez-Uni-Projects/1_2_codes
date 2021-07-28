#include <stdio.h>

typedef struct Vector Vector;
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

void passByValue( Vector V, double k)
{
    V.x = V.x * k;
    V.y = V.y * k;
}

void passByReference( Vector &V, double k) // call by reference- how can we change the data value of a structure variable by passing it as reference argument.
{
    V.x = V.x * k;
    V.y = V.y * k;
}


int main(){

    double k = 5.0; // scale factor

    Vector V, V1(100,200) , V2 (300, 400) , V3 (500,600);

    printf("Address of the vector: %d \n", &V1);

    // pointer declaration of the structure Vector
    Vector *ptr;
    ptr = &V; // ptr is same as &V1; *ptr is same as v1;

    ptr->x = 2.0;
    ptr->y = 3.0;

    printf("Address of the pointer: %d \n", ptr);
    printf("Values are: %f %f \n", ptr->x, ptr->y);
    printf("\n");

//    printf("Before Pass By value: ");
//    V1.prinVector();
//
//    passByValue(V1 , k);
//
//    printf("After Pass By value: ");
//    V1.prinVector();
//    printf("\n");


    printf("Before Pass By reference: ");
    V2.prinVector();

    passByReference(V2 , k);

    printf("After Pass By reference: ");
    V2.prinVector();


    return 0;
}



