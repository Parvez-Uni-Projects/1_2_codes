package shapetest;

public class Circle extends Shape{
    
    private double radius;
    
    
    public Circle(double radius,String color, boolean filled){
        super(color,filled);
        this.radius = radius;       
    }
    
    public Circle() {
        radius = 1.0;
    }

    public Circle(double radius) {
        this.radius = radius;
    }
    
    public void getClassName()
    {
        System.out.println("Circle");
    }
    
    public double calculateArea()
    {   
        return  Math.PI * radius * radius ;
    }

    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }
    
    //String color;
    
    public void seeColor()
    {   
        //color = "black";
        //super.color ="red";
        //System.out.println(color);
        //System.out.println(super.color);
    }
    
}
