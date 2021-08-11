public class Committee {
    public Batsman batObj;

    Committee(Batsman com1){

    }
    public void calculateAverage(Batsman batObj){

        int  average = batObj.gettotalRuns() / batObj.gettotalOuts();

        int printAverage =average;

        int length = String.valueOf(average).length();
        int sum=0;
        int i;

        for ( i =0 ; i<length ; i++){
            int digit = average%10;
            average/=10;

            sum+=Math.pow(digit,(length-i));
        }

        System.out.println("Average of batsman is : " + printAverage );

        if(sum == printAverage)     System.out.println("Batsman selected")      ;
        else                        System.out.println("Batsman not selected")  ;
    }
}
