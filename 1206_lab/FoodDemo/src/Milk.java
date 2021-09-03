public class Milk implements HealthyFood{

    public String mName;
    public double mCalorie;
    public double mFat;
    public String mNutritionValue;

    public String Calcium (){
        System.out.println("Calcium content is 12%");
    }

    public Milk(String mName ,double mCalorie , double mFat){
        this.mName = mName;
        this.mCalorie = mCalorie;
        this.mFat = mFat;
    }

    public Milk (String mNutritionValue){
        this.mNutritionValue = mNutritionValue;
    }
     public String getName()
     {
         return mName;
     }
     public void setName(String Name){
         this.mName =  Name;
     }

     public String getCalories(){
         return mCalorie;
     }

     public void setCalories(double mCalorie){
         this.mCalorie = mCalorie;
     }

     public double getFat(){
         return mFat;
     }

    public void setFat(double mFat){
        this.mFat = mFat;
    }
    
    String getNutritionValue(){
        return mHealthIssue;
    }



    void setNutritionValue(String mNutritionValue){
        this.mNutritionValue = mNutritionValue;
    }
    
}
