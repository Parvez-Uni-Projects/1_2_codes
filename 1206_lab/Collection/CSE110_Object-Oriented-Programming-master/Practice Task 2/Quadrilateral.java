//Sabbir Hossain Abir
//ID- 2020-2-60-185

public class Quadrilateral {
    private Point p1, p2, p3, p4;
    public Quadrilateral(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4){
        this.p1=new Point(x1, y1);
        this.p2= new Point(x2, y2);
        this.p3= new Point(x3, y3);
        this.p4= new Point(x4, y4);
    }
    public Quadrilateral(Point p1, Point p2, Point p3, Point p4){
        this.p1=p1;
        this.p2=p2;
        this.p3=p3;
        this.p4=p4;
    }
    public boolean isRectangle(){
        if(p1.distance(p2)== p3.distance(p4)&& p2.distance(p3)==p1.distance(p4) && p1.distance(p3)== p2.distance(p4)&& p1.distance(p4)!= p1.distance(p2) && p2.distance(p3)!=p3.distance(p4)){
            return true;
        }
        else return false;
    }
    public boolean isSquare(){
        if(p1.distance(p2)== p2.distance(p3) && p3.distance(p4)==p4.distance(p1)){
            return true;
        }
        else return false;
    }
    public boolean isRhombus(){
        if(p1.distance(p2)== p2.distance(p3) && p3.distance(p4)==p4.distance(p1) && p1.distance(p3)!= p2.distance(p4)){
            return true;
        }
        else return false;
    }
    public boolean isParallelogram(){
        if(p1.distance(p2)== p3.distance(p4) && p2.distance(p3)==p1.distance(p4) && p1.distance(p3)!= p2.distance(p4)){
            return true;
        }
        else return false;
    }

    public String toString() {
        return "Quadrilateral{" + "p1=" + p1 + ", p2=" + p2 + ", p3=" + p3 + ", p4=" + p4 + '}';
    }
}

