public class Pizza implements JunkFood {

    public String pizzaName;
    public double pizzaCalorie;
    public double pizzaFat;
    public String pizzaHealthIssue;

    String Problems()
    {
        System.out.println("High on calories");
    }

    public Pizza(String pizzaName ,double pizzaCalorie , double pizzaFat){
        this.pizzaName = pizzaName;
        this.pizzaCalorie = pizzaCalorie;
        this.pizzaFat = pizzaFat;
    }
    public Pizza (String pizzaHealthIssue){
        this.pizzaHealthIssue = pizzaHealthIssue;
    }

     @Override
     public String getName()
     {
         return pizzaName;
     }
     @Override
     public void setName(String pizzaName){
         this.pizzaName =  pizzaName;
     }

     @Override
     public String getCalories(){
         return pizzaCalorie;
     }

     @Override
     public String setCalories(double pizzaCalorie){
         this.pizzaCalorie = pizzaCalorie;
     }

     @Override
     public double getFat(){
         return pizzaFat;
     }

     @Override
    public void setFat(double pizzaFat){
        this.pizzaFat = pizzaFat;
    }
    @Override
    String getHealthIssues(){
        return pizzaHealthIssue;
    }


    @Override
    String setHealthIssues(String pizzaHealthIssue){
        this.pizzaHealthIssue = pizzaHealthIssue;
    }

    




    
}
