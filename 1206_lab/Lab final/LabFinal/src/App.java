import java.util.Scanner;
import myexceptions.*;
public class App {

    public static void main(String[] args) {
      
        Scanner input = new Scanner(System.in);

        System.out.println("Input a Code");

        int   user_input = input.nextInt();
        
        Transceiver obj =  new Transceiver();
        
        obj.setCode(user_input);

        try {
            obj.inspectSignal();
        } catch (InvalidInformationException e) {
            System.out.println("Exception is" + e);
        }

    }
}
