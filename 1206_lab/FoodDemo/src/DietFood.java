public abstract class DietFood {

    String sName;
    double sCalorie;
    double sFat;

    public DietFood(){

    }

    public DietFood(String sName, double sCalorie ,double sFat){
        this.sName =sName;
        this.sCalorie =sCalorie;
        this.sFat= sFat;

    }

    abstract void cholesterol();

     void type(){
        System.out.println("Eaten During special Diets");
     }

}
