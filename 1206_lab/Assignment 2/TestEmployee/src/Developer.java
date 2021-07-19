public class Developer {

    private int totalProjects;
    private int totalMonths;
 
    Developer (int totalProjects , int totalMonths){
        this.totalProjects = totalProjects;
        this.totalMonths = totalMonths;
    }


    public int gettotalProjects()
    {
        return totalProjects;
    }
    public void settotalProjects(){
        this.totalProjects =totalProjects;
    }
    public int gettotalMonths(){
        return totalMonths;
    }
    public void settotalMonths(){
        this.totalMonths = totalMonths;
    }

    public String checkPerformance(){
        
        int sumPerform = gettotalcProject() * gettotalMonths() +100 ;

        int length = String.valueOf(sumPerform).length();

        double sum=0;
        int i;
        int digit;

        for( i=0 ;i<length;i++ )
        { 
            digit= sumPerform%10;
            sumPerform /=10 ;
            sum+= Math.pow(digit, 3);     
            
        }
        if (sum%2 == 0 ) return "Developer's performance is bad ";
        else if (sum%2 != 0 ) return "Developer's performance is Good";
        return null;
    }


    private int gettotalcProject() {
        return totalProjects;
    } 


    
}
