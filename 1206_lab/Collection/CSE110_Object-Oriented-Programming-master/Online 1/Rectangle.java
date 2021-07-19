//Sabbir Hossain Abir
// ID: 2020-2-60-185
package com.company;

public class Rectangle {
    private double width;
    private double height;
    public Rectangle(){
        this.height=1;
        this.width=1;
    }
    public Rectangle(double width, double height){
        this.width=width;
        this.height=height;
    }
    public double getArea(){
        return width*height;
    }
    public double getPerimeter(){
        return 2*(width*height);
    }

    public static void main(String[] args) {
        Rectangle r1=new Rectangle(4,40);
        System.out.println("Width: " + r1.width);
        System.out.println("Height: " + r1.height);
        System.out.println("Area: " + r1.getArea());
        System.out.println("Perimeter: " + r1.getPerimeter());

        Rectangle r2=new Rectangle(3.5,35.9);
        System.out.println("Width: " + r2.width);
        System.out.println("Height: " + r2.height);
        System.out.println("Area: " + r2.getArea());
        System.out.println("Perimeter: " + r2.getPerimeter());
    }
}

