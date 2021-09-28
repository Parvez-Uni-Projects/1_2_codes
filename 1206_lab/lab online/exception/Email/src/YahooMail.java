
import exception.UnsupportedOperationException;

public class YahooMail {
   
    
    void login(String id) throws UnsupportedOperationException
    {
        if (id.contains("@") && (id.endsWith("yahoo.com") || id.endsWith("ymail.com") ) )

        {
            System.out.println("Yahoo mail ID login Successful");

        }

        else 
        {
            throw new UnsupportedOperationException("Login Unsuccessful");
        }


    }
    
}