public class Quadrilateral {

    private String type ;
    private double quadArea;

    public Quadrilateral(){

    }

    public Quadrilateral (String type , double quadArea)
    {
        this.type = type;
        this.quadArea = quadArea;
    }

    public void setType(String type) {
        this.type = type;
    }
    public void setQuadArea(double quadArea) {
        this.quadArea = quadArea;
    }
    public String getType() {
        return type;
    }
    public double getQuadArea() {
        return quadArea;
    }
        
    
    
}
