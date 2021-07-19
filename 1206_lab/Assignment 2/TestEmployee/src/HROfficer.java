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


    public void  checkPerformance(Developer devObj){
        
        int sumMerge = devObj.gettotalProjects() * devObj.gettotalMonths() +100 ;

        int sumPrint=sumMerge;

        int length = String.valueOf(sumMerge).length();
        int i;
        int finalPerformance=0;

        for(i=0 ;i<length ;i++)
        {
            finalPerformance+=Math.pow(sumMerge%10,3);
            sumMerge/=10;
        }

        System.out.println("Performance result is : " + sumPrint );

        if (finalPerformance%2 == 0 ){
            System.out.println ("Developer's performance is bad ");
        }
        else if (finalPerformance%2 != 0 ) System.out.println ("Developer's performance is Good "); 
    }
}
    
