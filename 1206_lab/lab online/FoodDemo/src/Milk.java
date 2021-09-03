public class Milk implements HealthyFood{

    public String milkName;
    public double milkCalorie;
    public double milkFat;
    public String milkNutritionValue;

    public String Calcium (){
        System.out.println("Calcium content is 12%");
    }

    public Milk(String milkName ,double milkCalorie , double milkFat){
        this.milkName = milkName;
        this.milkCalorie = milkCalorie;
        this.milkFat = milkFat;
    }

    public Milk (String milkNutritionValue){
        this.milkNutritionValue = milkNutritionValue;
    }

    @Override
     public String getName()
     {
         return milkName;
     }
     @Override
     public void setName(String Name){
         this.milkName =  Name;
     }

     @Override
     public String getCalories(){
         return milkCalorie;
     }

     @Override
     public String setCalories(double milkCalorie){
         this.milkCalorie = milkCalorie;
     }

     @Override
     public double getFat(){
         return milkFat;
     }

     @Override
    public void setFat(double milkFat){
        this.milkFat = milkFat;
    }
    @Override
    String getNutritionValue(){
        return milkHealthIssue;
    }


    @Override
    String setNutritionValue(String milkNutritionValue){
        this.milkNutritionValue = milkNutritionValue;
    }
    
}
