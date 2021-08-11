public class HROfficer {

    //*creating devobj public variable which will have the properties of Developer class
    public Developer devObj;

    //*constructor 
    HROfficer( Developer devObj) {

    }
    //* creating a method for finding the nth power of a number
    public int power(int num,int power)
    {
        int pow =1;

        for (int i=0 ;i< pow ;i++)  pow*=num;
      
        return pow;
    }

    //*creating a method for finding the length of an integer
    public int length(int num){
    
        int i;
            for(i=1 ; 0 != num;i++) num/=10;
        return i;     
    }
    

    //* The void method which will print out the Performance
    public void  checkPerformance(Developer devObj){
        

        //*Calculating the final performance using devobj and getter methods
        int sumMerge = devObj.getTotalProjects()* devObj.getTotalMonths() +100 ;


        //*Storing it into another variable as it will be used in a for loop
        int sumPrint=sumMerge;


        //*  Converting the int into a string for calculting the length (alternative)
        //int length = String.valueOf(sumMerge).length();


        //* using length method finding the length of the int
        int length = length(sumMerge);
        int i;
        int finalPerformance=0;

        for(i=0 ;i<length ;i++)
        {

            //*using the built in method to calculate the power
            // finalPerformance+=Math.pow(sumMerge%10,3);


            //*using the power method to find the power
            finalPerformance+=power(sumMerge%10,3);
            sumMerge/=10;
        }

        
        //*printing the result and creating the conditions
        System.out.println("Performance result is : " + sumPrint );

        if (finalPerformance%2 == 0 ){
            System.out.println ("Developer's performance is bad ");
        }
        else if (finalPerformance%2 != 0 ) System.out.println ("Developer's performance is Good "); 
    }
}
    
