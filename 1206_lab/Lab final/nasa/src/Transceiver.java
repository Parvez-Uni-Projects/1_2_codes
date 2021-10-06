public class Transceiver extends Machine {

    @Override

    public void decodeWave() throws NotPerfectNumberException
    {
        
        int i;
        int sum;

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
            throw new NotPerfectNumberException("perfect Number");
        }

    }
    
}
