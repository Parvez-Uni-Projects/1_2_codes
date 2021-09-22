
import exceptions.*;
public class Transceiver extends Receiver{

    public void checkSignal(int code)  {

        //Transceiver code = new Transceiver();
        Decoder decode = new Decoder();

        int factorCheck = 1;

        Integer array[] = new Integer[3];
        int primeCount = 0;
        for (int i = 2 ; i <= code ; i ++)
        {
            if (code % i  == 0)
            {
                for (int j = 2 ; j <= i/2 ; j++)
                {
                    if (i % j == 0)
                    {
                        break;
                    }

                }

                

                if(i == 5 || i == 2 || i == 3)
                {
                       
                        array[primeCount] = i;
                        primeCount++;

                    
                }
            
                else if (i < code)
                { 
                    // throw new NoInformationFoundException("Invalid Signal Received !Please Discard it");

                    array[primeCount] = i;
                    primeCount++;
                } 
            }
        }


        for (int i = 0 ; i <3 ; i++)
        {
            System.out.println(array[i]);

            if(i == 5 || i == 2 || i == 3)
            {
                   
                   
                System.out.println("Signal Received with information" + i);
                decode.decodeSignal(i);

                
            }

           
        }


    }
    
}
