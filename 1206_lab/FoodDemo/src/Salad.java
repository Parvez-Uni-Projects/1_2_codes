public class Salad extends DietFood implements HealthyFood {

        public String sName;
        public double sCalorie;
        public double sFat;
        public String sNutritionValue;

    public void cholesterol (){
        System.out.println("Salads Have 0% Cholesterol ");
    }


        
    
        public String Calcium (){
            System.out.println("Calcium content is 12%");
        }

    
        public Salad(String sName ,double sCalorie , double sFat){
            this.sName = sName;
            this.sCalorie = sCalorie;
            this.sFat = sFat;
        }
    
        public Salad (String sNutritionValue){
            this.sNutritionValue = sNutritionValue;
        }
    
        
         public String getName()
         {
             return sName;
         }
         
         public void setName(String sName){
             this.sName =  sName;
         }
    
       
         public String getCalories(){
             return sCalorie;
         }
    
         
         public String setCalories(double sCalorie){
             this.sCalorie = sCalorie;
         }
    
         
         public double getFat(){
             return sFat;
         }
    
       
        public void setFat(double sFat){
            this.sFat = sFat;
        }
       
        String getNutritionValue(){
            return sHealthIssue;
        }
    
    
       
        void setNutritionValue(String sNutritionValue){
            this.sNutritionValue = sNutritionValue;
        }
        
    
    
    
}
