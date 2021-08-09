public class CreateQuadrilateral {
    

    public Quadrilateral quadObj;

    CreateQuadrilateral(Quadrilateral quadObj){

    }

    public Quadrilateral generateQuad( double side )
    {
        Quadrilateral square = new Quadrilateral();
        
        double newArea = (side * side);
        String newType = "Square";
        square.setQuadArea(newArea);
        square.setType(newType);

        return square;

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
