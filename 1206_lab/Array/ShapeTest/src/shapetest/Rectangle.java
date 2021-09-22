package shapetest;


public class Rectangle extends Shape{
    
    private double length;
    private double width;

    public Rectangle() {
        length=1.0;
        width = 1.0;
    }

    public Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    public Rectangle(double length, double width,String color, boolean filled) {
        super(color,filled);
        this.length = length;
        this.width = width;
    }

    public double getLength() {
        return length;
    }

    public void setLength(double length) {
        this.length = length;
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }
    
    public double calculateArea()
    {
        return length * width ;
    }
    
}
