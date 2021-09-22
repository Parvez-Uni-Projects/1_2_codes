import exceptions.*;
import java.util.Scanner;
public class App {
    
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Input a Code");
        Integer code = scanner.nextInt();
       
        

        Transceiver trans = new Transceiver();
        trans.setCode(code);

        try {
            trans.checkSignal(code);
            
        } catch (NoInformationFoundException e) {
            System.out.println(e);
        }
        
    }
}