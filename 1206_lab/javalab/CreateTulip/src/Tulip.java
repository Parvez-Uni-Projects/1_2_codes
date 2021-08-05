public class Tulip {
    

    private String color;
    private double height;

    public Tulip (){

    }

    public Tulip(String color ,double height){
        this.color =color;
        this.height =height ;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public String getColor() {
        return color;
    }
    public double getHeight() {
        return height;
    }

    public Tulip create(Tulip obj1){

        Tulip newTulip  = new Tulip ();

       double newHeight =  (this.height + obj1.getHeight()) / 2;
       String newColor  = "pink";

       newTulip.setColor(newColor);
       newTulip.setHeight(newHeight);

       return newTulip;
    }
    
    public Tulip create(Tulip obj1,Tulip obj2){

        Tulip newTulip  = new Tulip ();

       double newHeight =  (this.height + obj1.getHeight()+ obj2.getHeight()) / 3;
       String newColor  = "Green";

       newTulip.setColor(newColor);
       newTulip.setHeight(newHeight);

       return newTulip;
    }
    
}
