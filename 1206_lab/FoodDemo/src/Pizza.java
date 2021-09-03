public class Pizza implements JunkFood {

    public String pName;
    public double pCalorie;
    public double pFat;
    public String pHealthIssue;

    String Problems()
    {
        System.out.println("High on calories");
    }

    public Pizza(String pName ,double pCalorie , double pFat){
        this.pName = pName;
        this.pCalorie = pCalorie;
        this.pFat = pFat;
    }
    public Pizza (String pHealthIssue){
        this.pHealthIssue = pHealthIssue;
    }

     
     public String getName()
     {
         return pName;
     }
    
     public void setName(String pName){
         this.pName =  pName;
     }

   
     public String getCalories(){
         return pCalorie;
     }

     
     public String setCalories(double pCalorie){
         this.pCalorie = pCalorie;
     }

     
     public double getFat(){
         return pFat;
     }

     
    public void setFat(double pFat){
        this.pFat = pFat;
    }

    String getHealthIssues(){
        return pHealthIssue;
    }


    @Override
    String setHealthIssues(String pHealthIssue){
        this.pHealthIssue = pHealthIssue;
    }

    




    
}
