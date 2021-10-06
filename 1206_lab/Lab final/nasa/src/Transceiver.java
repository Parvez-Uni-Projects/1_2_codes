public class Transceiver extends Machine {

    public void decodeWave() throws NotPerfectNumberException
    {
        
        int i ;
        int sum = 0 ;

        for ( i =1 ; i <= getValue()/2 ; i++)
        {
            if (getValue()%i == 0)
            {   
                
                sum += i;
            }

        }

        if (sum == getValue() && getValue() >0)
        {
            System.out.println("Perfect number");
            
        }
        else 
        {
            throw new NotPerfectNumberException("Not perfect Number");
        }

    }
    
}
