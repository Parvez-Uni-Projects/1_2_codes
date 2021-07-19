public class HROfficer {

    public Developer devObj;
    
    public void devObj (HROfficer Developer){
    

    }
    public int gettotalProjects() {
        return 0;
    }

    public int gettotalMonths() {
        return 0;
    }


    String  checkPerformance(Developer devObj){
        
        int finalPerformance = devObj.gettotalProjects() * devObj.gettotalMonths() +100 ;

        int length = String.valueOf(finalPerformance).length();
        int i;
        int sum=0;

        for(i=0 ;i<length ;i++)
        {
            sum+=Math.pow(finalPerformance%10,3);
            finalPerformance/=10;
        }

        if (sum%2 == 0 ) return "Developer's performance is bad ";
        else if (sum%2 != 0 ) return ("Developer's performance is Good ");
        return null;   
    }
}
    
