
import exceptions.*;

public class Transceiver extends Receiver{

    @Override
    public void checkSignal() throws NoInformationFoundException {

       int number = getCode();

         while(number%2==0)
            number/=2;
     
        while(number%3==0)
            number/=3;
        
        while(number%5==0)
            number/=5;
            
        if(number!=1)
        {
            throw new NoInformationFoundException("Invalid Signal Received! Please Discard it");
        }
        
        else 
        {
            System.out.println("Signal Received with Information!");
        }

    


    }
    
}
