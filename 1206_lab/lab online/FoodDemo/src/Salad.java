public class Salad extends DietFood implements HealthyFood {

        public String saladName;
        public double saladCalorie;
        public double saladFat;
        public String saladNutritionValue;

        public Salad(String saladName ,double saladCalorie , double saladFat){
           
            this.saladName = saladName;
            this.saladCalorie = saladCalorie;
            this.saladFat = saladFat;
        }

        public Salad(){
            
        }

        public void cholesterol (){
        System.out.println("Salads Have 0% Cholesterol ");
        }

        public Salad (String saladNutritionValue){
            this.saladNutritionValue = saladNutritionValue;
        }
    
        @Override
         public String getName()
         {
             return saladName;
         }
         @Override
         public void setName(String saladName){
              this.saladName =  saladName;
         }
    
         @Override
         public double getCalories(){
             return saladCalorie;
         }
    
         @Override
         public void setCalories(double saladCalorie){
             this.saladCalorie = saladCalorie;
         }
    
         @Override
         public double getFat(){
             return saladFat;
         }
    
         @Override
        public void setFat(double saladFat){
            this.saladFat = saladFat;
        }
        @Override
        public String getNutritionValue(){
            return saladNutritionValue;
        }
    
    
        @Override
        public void setNutritionValue(String saladNutritionValue){
            this.saladNutritionValue = saladNutritionValue;
        }
        
}
