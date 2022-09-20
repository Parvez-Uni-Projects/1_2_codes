import java.util.Scanner;
import myexceptions.*;
public class App {
    
    public static void main(String[] args) throws Exception {
        //System.out.println("Hello, World!");
        //Scanner input = new Scanner(nextLine);

        Scanner scanner = new Scanner(System.in);
        System.out.println("Input a Code");
        int   code = scanner.nextInt();
        
        code = 20;

        Transceiver transobj =  new Transceiver();

        transobj.setCode(code);

        try {
            transobj.inspectSignal();
        } catch (InvalidInformationException e) {
            System.out.println("Exception is" + e);
        }
        


    }
}
