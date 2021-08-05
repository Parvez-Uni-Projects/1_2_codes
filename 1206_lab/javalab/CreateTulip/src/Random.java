public class Random {

    public Tulip create(Tulip obj1,Tulip obj2){

        Tulip newTulip  = new Tulip ();

       double newHeight =  (obj2.getHeight() + obj1.getHeight()) / 2;
       String newColor  = "pink";

       newTulip.setColor(newColor);
       newTulip.setHeight(newHeight);

       return newTulip;
    }

    public int add(int a ,int b ){
        return a+b;
    }

    public double add(int a ,int b ,int c){
        return a+b+c;
    }

    public double add(double a ,int b ){
        return a+b;
    }
    
    
    
}
