public class HROfficer {

    public Developer devObj;
    
    public void devObj (HROfficer Developer){

    }

    public double checkPerformance(){
        
        

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

            return sum;
    }

    private int gettotalcProject() {
        return 0;
    }

    private int gettotalMonths() {
        return 0;
    }
}
