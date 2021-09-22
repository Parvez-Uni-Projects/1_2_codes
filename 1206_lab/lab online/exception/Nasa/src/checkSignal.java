
import exceptions.*;
public class checkSignal {

    public checkSignal()
    {

    }
    public void checkSignal(int number)
    {
        try {
            primeFactor primeObj = new primeFactor();

            if (primeObj.checkPrimeFactor(number) == 1)
            {
                System.out.println("Signal Received with Information");
            }
            else if (primeObj.checkPrimeFactor(number) == 0)
            {
                throw new NoInformationFoundException("InvalidSignalReceived!PleaseDiscard it");
            }
            
            
        } catch (NoInformationFoundException e) {
            System.out.println("Exception is " + e);
        }
    }
    
}
