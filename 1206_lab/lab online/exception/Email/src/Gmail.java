
import exception.InterruptedException;
public class Gmail {
   
    
    void login(String id) 
    {

        try {
            if (id.contains("@") && id.endsWith("gmail.com")) {
            System.out.println("Gmail ID login Successful");
            }
            else {
            throw new InterruptedException("Login Unsuccessful");
             }
   
        } catch (InterruptedException e) {
            System.out.println("Exception is ");
        }

        

       

    }
    
}
