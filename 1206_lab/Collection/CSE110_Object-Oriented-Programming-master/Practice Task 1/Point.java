public class Point {
    public double x;
    public double y;
    public Point() {
        this.x = -400;
        this.y = -400;
    }
    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    public double getX(){
        return this.x;
    }
    public double getY() {
        return y;
    }
    public void setX(double x){
        this.x=x;
    }
    public void setY(double y) {
        this.y = y;
    }
    public String toString(){
        String Point="x="+ this.x+"y="+ this.y;
        return Point;
    }
    public int getQuadrantNumber(){
        if (x>0 && y>0){
            return 2;
        }
        else if(x>0 && y<0){
            return 1;
        }
        else if(x<0 && y>0){
            return 3;
        }
            return 4;
    }
    }
