package shapetest;

import java.util.Scanner;

public class ShapeTest {

    public static void main(String[] args) {
        
        
        Shape obj1 = new Circle(5.5);
        Shape obj2 = new Rectangle(5.5,6.7);
        
        Rectangle obj3 = new Square(5.5);
        Shape obj4 = new Square(6.5);
        
        System.out.println(obj1.calculateArea());
        System.out.println(obj2.calculateArea());
        System.out.println(obj3.calculateArea());
        System.out.println(obj4.calculateArea());
        
 
        Shape shp = new Shape();
        System.out.println(shp.calculateArea());
        
        Scanner sn= new Scanner(System.in);
        System.out.println("Enter type: ");
        Shape callObj = null;    
        callArea(callObj, sn.nextLine());
        
    }
    
    public static void callArea(Shape shpObj, String type)
    {   
        Scanner sn= new Scanner(System.in);
        if(type.equals("circle"))
        {   
            System.out.println("Enter radius: "); 
            shpObj= new Circle(sn.nextDouble());
            System.out.println(shpObj.calculateArea());
        }
        else if(type.equals("rectangle")){
            System.out.println("Enter length and width: "); 
            shpObj= new Rectangle(sn.nextDouble(),sn.nextDouble());
            System.out.println(shpObj.calculateArea());
        }
        else if(type.equals("square")){
            System.out.println("Enter side: "); 
            shpObj= new Square(sn.nextDouble());
            System.out.println(shpObj.calculateArea());
        }
            
    }
    
    
    
     /*
        Shape obj1 = new Shape();
        Circle obj2 = new Circle(10.8,"blue",true);
        Rectangle obj3 = new Rectangle(4.5,3.2,"ash",false);
        Square obj4 = new Square(2.0, "brown",true);
        
        System.out.println("Area of Shape: "+obj1.calculateArea());
        System.out.println("Area of Circle: "+ obj2.calculateArea());
        System.out.println("Area of Rectangle: "+ obj3.calculateArea());
        System.out.println("Area of Square: "+ obj4.calculateArea());
        
        
        System.out.println(obj1.getColor());
        System.out.println(obj1.isFilled());
        
        System.out.println(obj2.getColor());
        System.out.println(obj2.isFilled());
        System.out.println(obj2.getRadius());
        
        System.out.println(obj3.getColor());
        System.out.println(obj3.isFilled());
        System.out.println(obj3.getLength());
        System.out.println(obj3.getWidth());
        
        System.out.println(obj4.getColor());
        System.out.println(obj4.isFilled());
        System.out.println(obj4.getLength());
        System.out.println(obj4.getWidth());*/
}
