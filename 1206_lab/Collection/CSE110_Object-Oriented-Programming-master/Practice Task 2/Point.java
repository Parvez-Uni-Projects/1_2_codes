//Sabbir Hossain Abir
// ID: 2020-2-60-185

public class Point {
    double x;
    double y;

    public Point(double x,double y){
        this.x=x;
        this.y=y;
    }
    public double distance(Point p){
        return Math.sqrt(Math.pow(this.x - p.getX(), 2) + Math.pow(this.y - getY(), 2));
    }

    public double getX() {
        return x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return y;
    }

    public void setY(double y) {
        this.y = y;
    }

    public String toString() {
        return "Point{" + "x=" + x + ", y=" + y + '}';
    }
}