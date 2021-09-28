import exception.UnsupportedOperationException;
public class Email {
    public static void main(String[] args) {

        Gmail gmail = new Gmail();
        YahooMail yahoo = new YahooMail();

       
        gmail.login("xyz@pmail.com");
        

        try {
            yahoo.login("xyz@gmail.com");
        } catch (UnsupportedOperationException e) {
            System.out.println("Exception is" + e);
        }
    }
}
