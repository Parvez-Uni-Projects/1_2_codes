public class CreateQuadrilateral {
    
    //creating the methods that has same name but different parameters as a result depending on the parameters passed different method is called
    public Quadrilateral generateQuad( double side )
    {
        Quadrilateral square = new Quadrilateral();  //creating a object of quadrilateral 
        
        double newArea = (side * side);  //applying the formula
        String newType = "Square";
        square.setQuadArea(newArea); // setting them as the values 
        square.setType(newType);

        return square;  //returning the objects

    }

    public Quadrilateral generateQuad( double side ,double base )
    {
        Quadrilateral rectangle = new Quadrilateral();
        
        double newArea = (side * base);
        String newType = "Rectangle";
        rectangle.setQuadArea(newArea);
        rectangle.setType(newType);

        return rectangle;
    }

    public Quadrilateral generateQuad( double side1 ,double side2, double height )
    {
        Quadrilateral trapezium = new Quadrilateral();
        
        double newArea = ( (1/2.0) * (side1+side2) * height );
        String newType = "Trapezium";
        trapezium.setQuadArea(newArea);
        trapezium.setType(newType);

        return trapezium;
    }


}
