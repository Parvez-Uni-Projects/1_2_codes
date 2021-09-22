import exceptions.*;
import java.util.Scanner;
public class App {
    
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        Transceiver transceiver = new Transceiver();

        Decoder decoder = new Decoder();

        System.out.println("Input a Code");
        int   code = scanner.nextInt();
       
        transceiver.setCode(code);

        try {
            transceiver.checkSignal();
            decoder.decodeSignal(transceiver.getCode());
            
        } catch (NoInformationFoundException e) {
            System.out.println(e);
        }
        
    }
}