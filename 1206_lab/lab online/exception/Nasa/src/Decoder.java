public class Decoder {
    
    void decodeSignal(int primeFactor)
    {
        if (primeFactor == 2)
        {
            System.out.println("Water Found");
        }

        else if (primeFactor == 3)
        {
            System.out.println("Microorganism Found");
        }
        else if (primeFactor == 5)
        {
            System.out.println("Minerals Found");
        }
        
    }
}
