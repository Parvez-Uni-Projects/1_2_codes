import myexceptions.*;
public class Transceiver extends ControlCenter {


    @Override
    public void inspectSignal() throws InvalidInformationException {

        int  i;
        boolean flag = false;

        for (i = 2; i <= getCode() / 2; ++i) {
            if (getCode() % i == 0) {
              flag = true;
              break;
            }
          }
        
        if (flag)
        {
            throw new InvalidInformationException("Invalid Signal Received! Please Discard it");
            
        }
        else
        {
            System.out.println("Signal Received with Information!");
            Translator translator = new Translator();
            translator.decodeSignal(getCode());
        }
    }
    
}

