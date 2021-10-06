public class Translator {

    void decodeSignal(int code)
    {


        if (code == 2)
        {
            System.out.println("Minerals Found");
        }

        if (code == 3)
        {
            System.out.println("Microorganism Found");
        }
        if (code > 3)
        {
            System.out.println("Water Found");
        }
        
    }
    
}
